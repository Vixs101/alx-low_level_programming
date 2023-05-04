#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given  index
 * @n: parameter
 * @index: parameter 2
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);
	unsigned long int result = *n & mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (result != *n)
	{
		*n = result;
		return (1);
	}
	else
	{
		return (-1);
	}
}
