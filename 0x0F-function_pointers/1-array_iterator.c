#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function
 * @array: the array to be worked on
 * @size: the size of the array
 * @action: the function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
