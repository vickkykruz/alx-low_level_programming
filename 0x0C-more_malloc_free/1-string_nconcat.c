#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strlen - This is a function that gets the total length of the string
 * @str: This is an argument that reprsent the givem string
 * Return: This return an int (the length of the string)
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * _strconcat - This is a function that return the concatnated string
 * @ptr: This is an argument that reprsent the destination pointer
 * @s1: This is an argument that reprsent the given first string
 * @len1: This is an argument that pass the given lenght of the s1
 * @s2: This is an argument that reprsent the given second string
 * @len2: This is an argument that present the given lenght of string2
 * @n: This is an agrument we passwd the n condition
 * Return: This return a newly conacatnated string
 */
char *_strconcat(char *ptr, char *s1, unsigned int len1, char *s2,
unsigned int len2, unsigned int n)
{
	unsigned int i;

	if (n >= len2)
		n = len2;

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (; i < (len1 + n); i++)
	{
		ptr[i] = s2[i - len1];
	}
	ptr[i] = '\0';
	return (ptr);
}
/**
 * string_nconcat - This is a function that concatenates two strings.
 * @s1: This is an argument that represent the given string one
 * @s2: This is an argument that also represent the given string two
 * @n: This is an argument that reprsent the limit of string two
 * Return: This return a pointer of the concatanated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int len1, len2, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** Get the lenght of the strings **/
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	/** Condition of the string 2 lenght **/
	len = (n >= len2) ? len1 + len2 + 1 : len1 + n + 1;

	ptr = malloc(len * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	 ptr = _strconcat(ptr, s1, len1, s2, len2, n);
	return (ptr);
}
