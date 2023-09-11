#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees memory used by struct dog.
* @d: struct dog to free.
* Return: 0 (success).
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

