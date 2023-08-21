#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a list
 * @head: a point to the head of the list
 * @n: the data to be added
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
