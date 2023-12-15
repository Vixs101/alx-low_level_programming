#include "main.h"
#include <stdio.h>

/**
 *  print_binary - prints the binary representation of a number
 *  @n: number to be converted
 *  Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int num = sizeof(unsigned long int) * 8 - __builtin_clzl(n);
	unsigned long int mask = 1UL << (num - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
