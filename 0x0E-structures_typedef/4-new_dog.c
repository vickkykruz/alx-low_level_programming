#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Function that print the lenght of a string
 * @s: The input sting
 * Return: The length of the string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * new_dog - function that creates a new dog.
 * @name: The input name
 * @age: The input age
 * @owner: The input owner
 * Return: pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
int i, j, k;

i = _strlen(name);
j = _strlen(owner);

ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}

ptr->name = malloc(i *sizeof(ptr->name));
if (ptr->name == NULL)
{
free(ptr->name);
free(ptr);
return (NULL);
}
for (k = 0; k <= i; k++)
{
ptr->name[k] = name[k];
}
ptr->age = age;

ptr->owner = malloc(j *sizeof(ptr->owner));
if (ptr->owner == NULL)
{
free(ptr->owner);
free(ptr);
return (NULL);
}
for (k = 0; k <= j; k++)
{
ptr->owner[k] = owner[k];
}
return (ptr);
}
