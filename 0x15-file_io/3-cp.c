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
