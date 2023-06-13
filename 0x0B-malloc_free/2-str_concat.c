#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - This is a function that return the total length of the string
 * @str: This is an argument that repreaent the given string
 * Return: This return the lenght of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
/**
 * _strconcat - This is a function that return the concatenated string
 * @ptr: This is an argument that represent the destrination pointer
 * @s1: This is am argument that represent the first string (given)
 * @s2: This is an argument that represent the second string (given)
 *
 * Return: This retuen the concatnated string
 */
char *_strconcat(char *ptr, char *s1, char *s2)
{
	int ai = 0, bi = 0;

	while (s1[ai] != '\0')
	{
		ptr[ai] = s1[ai];
		ai++;
	}

	while (s2[bi] != '\0')
	{
		ptr[ai] = s2[bi];
		ai++, bi++;
	}
	ptr[ai] = '\0';
	return (ptr);
}

/**
 * str_concat - This is a function that concatenates two given strings.
 * @s1: This is an argument that represent the first string
 * @s2: This is an argument that represent the second string
 *
 * Return: The function a concatenated string pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int ai, bi, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/** Get the length of the with two strings */
	ai = _strlen(s1);
	bi = _strlen(s2);
	len = ai + bi + 1;

	ptr = (char *) malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);

	_strconcat(ptr, s1, s2);
	return (ptr);
}
