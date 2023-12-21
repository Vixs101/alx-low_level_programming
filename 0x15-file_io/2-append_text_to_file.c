#include "main.h"

/**
 * append_text_to_file - a function that appends text to the eof.
 * @filename: the name of the file.
 * @text_content: null terminated string to be added to the file.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten;

	if (access(filename, F_OK) != -1)
	{
		if (filename == NULL)
			return (-1);

		fd = open(filename, O_RDWR | O_APPEND);

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
	else
		return (-1);
}
