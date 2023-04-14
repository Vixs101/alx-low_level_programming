#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat  - a function that  concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: unsigned integer
 * Return: returns a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t s1_len, s2_len, copy_len;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	copy_len = s2_len < n ? s2_len : n;

	result = (char *)malloc(s1_len + copy_len + 1);
	if (result == NULL)
	return (NULL);

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, copy_len);
	result[s1_len + copy_len] = '\0';

	return (result);
}
