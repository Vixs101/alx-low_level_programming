#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - a function that deletes the head node of a linked list
 * and returns the head node's data(n)
 * @head: pointer to the head node
 * Return: returns the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);

	return (data);
}
