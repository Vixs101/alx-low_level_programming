#include "main.h"

/**
 *  _strlen - a function that returns the length of a string
 * @s: parameter whose length is to be checked
 * Return: 0 when successful
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
