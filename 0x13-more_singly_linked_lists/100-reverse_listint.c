#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev __attribute__((unused)) = NULL;
	listint_t *nxt __attribute__((unused)) = NULL;

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}

	*head = prev;
	return (*head);
}
