#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: first member
 * @name: second member
 * @age: third member
 * @owner: fourth member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
