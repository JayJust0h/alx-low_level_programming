#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes variable dog.
 * @d: Pointer to dog.
 * @name: Name of dog.
 * @age: Age of the dog.
 * Return: 0(success).
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
