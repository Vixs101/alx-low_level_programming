#include "main.h"

/**
 * main - entry point into the program.
 * @argc: argument count.
 * @argv: argument vectors.
 * Return:0 on success.
 */

int main(int argc, char *argv[])
{
	const char *source __attribute((unused));
	const char *destination __attribute((unused));
	ssize_t bytesCopied __attribute((unused));

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source = argv[1];
	destination = argv[2];

	bytesCopied = copyFile(source, destination);

	if (bytesCopied == -1)
		return (-1);

	return (0);
}

/**
 * copyFile - a function that copies the content of one file to another.
 * @sourceFile: file to be copied from.
 * @destinationFile: file to be copied to.
 * Return: 0 on success.
 */

ssize_t copyFile(const char *sourceFile, const char *destinationFile)
{
	int fd1, fd2, closefd1, closefd2;
	char buffer[1024];
	ssize_t bytesRead, bytesWritten;

	fd1 = open(sourceFile, O_RDONLY);

	if (fd1 == -1 || access(sourceFile, F_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourceFile);
		return (-1);
	}

	fd2 = open(destinationFile, O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd2 == -1)
	{
		close(fd1);
		close(fd2);
		return (-1);
	}

	while ((bytesRead = read(fd1, buffer, sizeof(buffer) - 1)) > 0)
	{
		bytesWritten = write(fd2, buffer, bytesRead);

		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destinationFile);
			exit(99);
		}
	}

	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sourceFile);
		close(fd1);
		close(fd2);
		exit(98);
	}

	closefd1 = close(fd1);
	if (closefd1 == -1)
	{
		closefd2 = close(fd2);
		if (closefd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
