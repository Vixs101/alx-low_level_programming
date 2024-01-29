#include "main.h"
/**
 * *_memcpy - A function that copies memory area
 * @dest: destination to be copied to
 * @src: source from which the memory area would be copied
 * @n: number of bytes to be copied
 * Return: returns a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *Dst = (char *) dest;
	char *source = (char *) src;

	if ((Dst != NULL) && (source != NULL))
	{
		while (n)
		{
			*(Dst++) = *(source++);
			--n;
		}
	}
	return (dest);
}
