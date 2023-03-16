#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strlen - function that get the length of a string
 * @s: The input string
 * Return: The lenght
*/
int strlen(char *s)
{
int i = 0;

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
int i, strlen1 = 0, strlen2 = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

/* To get the length of the string */
strlen1 = strlen(s1);
strlen2 = strlen(s2);

if (n >= strlen2)
{
ptr = malloc((strlen1 + strlen2) +1 * sizeof(char));
if (ptr == 0)
{
return (NULL);
}

for (i = 0; i < strlen1; i++)
{
ptr[i] = strlen1[i];
}
for (; i < (strlen1 + strlen2); i++)
{
ptr[i] = strlen2[i - strlen1];
}
}
ptr[i] = '\0';
return (ptr);
}
