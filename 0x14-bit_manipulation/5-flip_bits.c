#include "main.h"
#include <stdio.h>

/**
 * flip_bits - a function that returns number of bits you would need to flip
 * to get from one number to another
 * @n:parameter
 * @m:parameter 2
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		if (xor & 1)
		{
			count++;
		}
		xor >>= 1;
	}
	return (count);
}
