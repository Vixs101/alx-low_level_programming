#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint list
 * @head: a pointer to the head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	void *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
