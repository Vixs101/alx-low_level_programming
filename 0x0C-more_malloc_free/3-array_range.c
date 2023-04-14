#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an arrays of integers
 * @min: parameter 1
 * @max: parameter 2
 * Return: returns a pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
