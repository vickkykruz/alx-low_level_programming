#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - This is a function that return the total length of a string
 * @str: This is the argument that passes the string
 * Return: This return the lenght of the string (int)
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * new_dog - This is a function that creates a new dog.
 * @name: This is an argument that passes the name
 * @age: This is an argument that passes the age
 * @owner: This is an argument that passes the owner
 * Return: This return the struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int len1, len2, i;

	/** Get the lenght of the strings **/
	len1 = _strlen(name);
	len2 = _strlen(owner);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = malloc(sizeof(ptr->name) * (len1 + 1));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	ptr->age = age;
	ptr->owner = malloc(sizeof(ptr->owner) * (len2 + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	return (ptr);
}
