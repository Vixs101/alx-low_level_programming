#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated space
 * @str: a pointer
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dup_str;

	/*check if str is NULL*/
	if (str == NULL)
	{
		return (NULL);
	}
	/*allocates memory for the duplicated string*/
	dup_str = (char *) malloc(strlen(str) + 1);

	/*checking if allocation was successful*/
	if (dup_str == NULL)
	{
		return (NULL);
	}

	/*copy the string to the new memory location*/
	strcpy(dup_str, str);

	return (dup_str);
}
