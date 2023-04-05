#include "main.h"
/**
 * *_strpbrk - a function that searches a string for any set of bytes
 * @s: the null terminated string to be scanned
 * @accept: the null terminated string containing the characters to match
 * Return: 0 on success
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
