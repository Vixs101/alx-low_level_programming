#include "main.h"

/**
 * *_memset- a function that fills memory with a constant byte
 * @s: pointer that points to the memory block to be filled with the value
 * @b: the value that should be written to each byte of the memory block
 * @n: the number of bytes to be filled with the value.
 * Return: return the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char*) s;
	unsigned char uc = (unsigned char) b;

	while (n--)
	{
		*p++ = uc;
	}

	return (s);
}
