#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * exit_with_error - print an error to the stderr and exit
 * @error_message: message to be printed
 * @filename:the file associated with the error
 * @fd_from: file descriptor of the file we are copying from
 * @fd_to: file descriptor of the file we are copying to
 * Return: void
 */

void exit_with_error(char *error_message, char *filename, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, error_message, filename);
	if (fd_from != -1)
	close(fd_from);
	if (fd_to != -1)
	close(fd_to);
	exit(EXIT_FAILURE);
}

/**
 * main -entry point to the program
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 when successfull
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	exit(EXIT_FAILURE);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	exit_with_error("Error: Can't read from file %s\n", argv[1], -1, -1);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	exit_with_error("Error: Can't write to %s\n", argv[2], fd_from, -1);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written == -1)
	exit_with_error("Error: Can't write to %s\n", argv[2], fd_from, fd_to);
	}
	if (bytes_read == -1)
	exit_with_error("Error: Can't read from file %s\n", argv[1], fd_from, fd_to);

	if (close(fd_from) == -1)
	exit_with_error("Error: Can't close fd %d\n", argv[1], fd_from, fd_to);

	if (close(fd_to) == -1)
	exit_with_error("Error: Can't close fd %d\n", argv[2], fd_from, fd_to);
	return (0);
}


