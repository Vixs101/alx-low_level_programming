#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a linked list
 * @h: pointer to the head of the list
 * Return: returns the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
