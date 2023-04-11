#include "main.h"

/**
 * *_strchr - A function that locates a character in a string
 * @s:This is a pointer to the null-terminated byte string
 * @c: the character to searched for
 * Return: zero when successful
 */

char *_strchr(char *s, char c)
{
	char *findchar = NULL;

	if (s != NULL)
	{
		do {
			if (*s == (char) c)
			{
			findchar = s;
			break;
			}
		} while (*s++);
	}
	return (findchar);
}
