#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: a pointer to the head of the list
 * @n: an element in the node
 * Return: The address of the new element, or null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
