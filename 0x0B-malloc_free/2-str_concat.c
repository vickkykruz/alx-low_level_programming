#include "main.h"
#include <stdlib.h>
/**
 * _strlen - function to get the length of a string
 * @c: The input string
 * Return: the length (len)
*/

int _strlen(char *c)
{
int len = 0;

while (c[len] != '\0')
{
len++;
}
return (len);
}

/**
 * str_concat - function that concatenate two string
 * @s1: The input string one
 * @s2: The input string two
 * Return: char
*/

char *str_concat(char *s1, char *s2)
{
char *ptr;
int len, i, j;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

/* To get the total length of both strings */
len = (_strlen(s1) + _strlen(s2)) + 1;

/* To manage the memory */
ptr = (char *) malloc(len *sizeof(char));
if (ptr == 0)
{
return (NULL);
}

/* Perform the operation */
i = 0;
while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}

for (j = 0; s2[j] != '\0'; j++, i++)
{
ptr[i] = s2[j];
}
ptr[i] = '\0';
return (ptr);
}
