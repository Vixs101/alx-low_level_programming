#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elements in a list
 * @h: A pointer to the head of the list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
