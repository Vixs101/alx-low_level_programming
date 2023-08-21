#include "main.h"

/**
 * _strspn - Entry point
 * @s: the null terminated string to be scanned
 * @accept: the null terminated string containing the characters to match
 * Return: always 0 when successful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
			}
		}
	}
	return (0);
}
