#include "main.h"

/**
 * read_textfile - a function that reads a textfile and prints to the POSIX
 * @filename: name of file to be read.
 * @letters: number of letters to read and print.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	char *buffer;
	ssize_t bytesRead;
	ssize_t lettersWritten;

	if (filename == NULL)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);

	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		return (0);
		close(fileDescriptor);
	}

	bytesRead = read(fileDescriptor, buffer, letters);

	if (bytesRead == -1)
	{
		free(buffer);
		return (0);
	}
	lettersWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (lettersWritten == -1 || lettersWritten != bytesRead)
	{
		free(buffer);
		return (0);
	}

	close(fileDescriptor);
	free(buffer);
	return (lettersWritten);
}
