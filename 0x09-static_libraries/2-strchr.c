#include "main.h"
#define NULL 0

/**
 * _strchr - function that locates a character
 * in a string
 * @s: the input string
 * @c: The target character
 * Return: This return a pointer
*/

char *_strchr(char *s, char c)
{
int i;
i = 0;

while (s[i] != '\0' && s[i] != c)
{
i++;
}
if (s[i] == c)
{
return (&s[i]);
}
return (NULL);
}
