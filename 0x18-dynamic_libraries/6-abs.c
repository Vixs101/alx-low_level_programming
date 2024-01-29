#include "main.h"

/**
 * _abs -computes value of an integer
 * @n: parameter to be checked
 * Return: always 0 when successful
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
