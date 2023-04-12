#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	concat_str = (char *) malloc(strlen(s1) + strlen(s2) + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	strcpy(concat_str, s1);
	strcat(concat_str, s2);
	return (concat_str);
}
