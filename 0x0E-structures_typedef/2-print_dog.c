#include "dog.h"
#include <stdio.h>
/**
 * print_dog - This is a function that prints a struct dog
 * @d: This is an argument that containt the struct dog
 * Return: This return a void
 */
void print_dog(struct dog *d)
{
	/** Condition: Check if the struct dog d is true **/
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
