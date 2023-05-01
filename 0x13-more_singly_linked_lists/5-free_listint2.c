#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - write a function that frees a listint_t list
 * @head: a pointer to the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
