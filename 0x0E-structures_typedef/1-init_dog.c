#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: The input struct d
 * @name: The input property name
 * @age: The inpit property age
 * @owner: The input property owner
 * Description: The function initialize a variable type struct dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
