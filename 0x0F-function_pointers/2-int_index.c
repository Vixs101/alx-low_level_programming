#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: array to be worked on
 * @size: is the number of elements in the array
 * @cmp: a function pointer used to compare values
 * Return: 0 when successful
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
