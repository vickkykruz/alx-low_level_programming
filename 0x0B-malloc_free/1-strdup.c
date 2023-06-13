#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - This is a function that get the total ength of a string
 * @str: This is an argument that represebt the given string
 * Description: In this function, I want to get the length of a string with the
 * help of the conition if string is equal to the null terminator '\0'
 * Return: This function return the total length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] == '\0')
		i++;

	return (i);
}
/**
 * _strdup - This is a function that a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: This is an arugument that represent the given string to be allocated.
 * Description: In this task I'm asked to allocate and intizated the given
 * string.
 * Return: This function will return a char pointer
 */
char *_strdup(char *str)
{
	char *prt;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	prt = (char *) malloc((len + 1) * sizeof(char));
	if (prt == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		prt[i] = str[i];
	}

	return (prt);
}
