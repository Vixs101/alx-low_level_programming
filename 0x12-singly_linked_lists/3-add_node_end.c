#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: Address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	char *new_str;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
