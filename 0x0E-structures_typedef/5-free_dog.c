#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - This is a function that free the dog
 * @d: This is an argument that passes the struct dog
 * Return: This return a void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);

		if (d->owner)
			free(d->owner);

		free(d);
	}
}
