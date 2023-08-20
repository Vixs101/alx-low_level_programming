#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list
 * @h: pointer to the head node
 * Return: returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;
	int data = 0;

	while (ptr != NULL)
	{
		data = ptr->n;
		printf("%d\n", data);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
