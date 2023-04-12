#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars
 * @size: number of characters
 * @c: a character
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	/*allocate memory for the array*/
	arr = (char *) malloc(size * sizeof(char));

	/*checking if allocation was successful*/
	if (arr == NULL)
	{
		return (NULL);
	}

	/*initializing the array with a specific character*/

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
