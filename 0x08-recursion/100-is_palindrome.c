#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - checks the starting index
 * @s: parameter
 * @start: parameter
 * @end: parameter
 * Return: 0 when successful
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if string is palindrome
 * @s: parameter
 * Return: 0 when successful
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (is_palindrome_helper(s, 0, len - 1));
}
