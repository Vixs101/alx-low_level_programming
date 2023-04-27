#include "lists.h"

/**
 * list_len - gets the number of elements in a linked list
 * @h: the linked list
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t members = 0;

	while (h)
	{
		members++;
		h = h->next;
	}

	return (members);
}
