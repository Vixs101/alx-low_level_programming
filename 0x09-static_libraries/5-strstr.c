#include "main.h"
#include <stdio.h>

/**
 * *_strstr - a function that locates a substring
 * @haystack: the pointer to a string to be scanned
 * @needle: this is the pointer to the sub-string to match
 * Return: 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
