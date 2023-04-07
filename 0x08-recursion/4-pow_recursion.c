#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x^y
 * @x: first parameter
 * @y: second parameter
 * Return: always 0 when successful
 */

int _pow_recursion(int x, int y)
{
	int half;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		half = _pow_recursion(x, y / 2);
		return (half * half);
	}
	else
	{
		half = _pow_recursion(x, (y - 1) / 2);
		return (half * half * x);
	}
}
