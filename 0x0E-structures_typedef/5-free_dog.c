#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog_t struct
 * @d: pointer to the struct to be freed
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
