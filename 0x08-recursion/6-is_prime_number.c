#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * is_prime_helper- initialization
 * @n: parameter
 * @i: parameter
 * Return: 0 when successful
 */

int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - checks the if the divisor has reached n
 * @n: parameter 1
 * @i: parameter 2
 * Return: itself
 */
int is_prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}
