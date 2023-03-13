#include "main.h"
#include <stdlib.h>
/**
 * _strlen - function to print the lenght
 * of a string
 * @c: The input string
 * Return: len
*/

int _strlen(char *c)
{
unsigned int len = 0;

while (c[len] != '\0')
{
len++;
}
return (len);
}

/**
 * _strcpy - functon to copy string
 * @dest: The dest input
 * @src: The source input
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * _strdup - return a pointer to a new string
 * which is a duplicate of the string str.
 * @str: Memory for the new string is obtained
 * with malloc
 * Return: pointer
*/

char *_strdup(char *str)
{
char *ptr;
unsigned int len;

/* Condition */
if (str == 0)
{
return (NULL);
}

/* Get the total length of the string */
len = _strlen(str) + 1;

ptr = (char *) malloc(len *sizeof(char));
if (ptr == 0)
{
return (NULL);
}

/* Function to copy the strings */
_strcpy(ptr, str);
return (ptr);
}
