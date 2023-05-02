#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at the index 'index' of a
 * listint_t linked list
 * @head: a pointer to the head of the list
 * @index: index of the node that should be deleted. index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *prev;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	prev = *head;
	current = (*head)->next;
	while (current && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	prev->next = current->next;
	free(current);
	return (1);
}
