#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to be created.
 * @text_content: null terminated string to write to the file.
 * Return: 1 on success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytesWritten = write(fd, text_content, strlen(text_content));

		if (bytesWritten == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
