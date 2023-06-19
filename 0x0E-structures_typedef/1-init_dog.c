#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * init_dog - This is a function that initialize a variable of type struct dog
 * @d: This is an argument that content the struct dog
 * @name: This is argument used to pass the given name
 * @age: This is an argument used to pass the given age
 * @owner: This is an argument used to pass the given owner
 * Return: This return a void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/** Initialze the information **/
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
