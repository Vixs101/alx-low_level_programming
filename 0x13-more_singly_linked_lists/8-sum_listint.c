#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - A function that returns the sum of all the data in the
 * listint_t linked list
 * @head: pointer to the head of the list
 * Return: Returns the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
