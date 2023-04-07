#include "main.h"

/**
 * factorial - A function that calculates the factorial of a number
 * @n: Parameter
 * Return: returns the factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
