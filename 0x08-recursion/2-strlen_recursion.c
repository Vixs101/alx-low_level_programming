#include "main.h"

/**
 * _strlen_recursion - a function that prints the length of a string
 * @s: a pointer pointing to an array of characters
 * Return: always 0 when successfull
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
