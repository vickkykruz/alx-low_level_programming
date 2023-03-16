#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - function that return lenght of the string
 * @s: The input string
 * Return: The lenght
*/

int _strlen(char *s)
{
unsigned int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The number of memory to be allocated
 * Return: pointet
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, j = 0, strlen1 = 0, strlen2 = 0;
if (s1 == NULL || s2 == NULL)
{
s1 = s2 = "";
}
/* To get the length of the string */
strlen1 = _strlen(s1);
strlen2 = _strlen(s2);
if (n <  strlen2)
{
ptr = malloc((strlen1 + n + 1) * sizeof(char));
}
else
{
ptr = malloc((strlen1 + strlen2 + 1) * sizeof(char));
}
if (!ptr)
{
return (NULL);
}
for (i = 0; i < strlen1; i++)
{
ptr[i] = s1[i];
}

while (n < strlen2 && i < (strlen1 + n))
{
ptr[i++] = s2[j++];
}
while (n >= strlen2 && i < (strlen1 + strlen2))
{
ptr[i++] = s2[j++];
}
ptr[i] = '\0';
return (ptr);
}
