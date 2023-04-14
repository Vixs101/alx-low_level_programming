#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	const char *errmsg;
	int i;

	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		errmsg = "Error: malloc failed\n";
		for (i = 0; errmsg[i] != '\0'; ++i)
		{
			_putchar(errmsg[i]);
		}
		exit(98);
	}
	return (ptr);
}
