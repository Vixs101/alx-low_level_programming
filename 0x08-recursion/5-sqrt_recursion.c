#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper - checks if n has a natural sqrt
 * @n: parameter
 * @min: parameter 2
 * @max: parameter 3
 * Return:0 when successful
 */

int _sqrt_helper(int n, int min, int max)
{
	int guess;

	if (max < min)
	{
		return (-1);
	}
	guess = (min + max) / 2;
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess < n)
	{
		return (_sqrt_helper(n, guess + 1, max));
	}
	else
	{
		return (_sqrt_helper(n, min, guess - 1));
	}
}

/**
 * _sqrt_recursion  - finds the natural square root of a number
 * @n: parameter
 * Return: 0 when successful
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}
