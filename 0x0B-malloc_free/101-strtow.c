#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * counter - function that return the total length
 * of a string
 * @s: The input string
 * Return: the length of the string
*/

int counter(char *s)
{
int i = 0, w = 0, c;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
{
i = 0;
}
else if (i == 0)
{
i = 1;
w++;
}
}
return (w);
}
/**
 * **strtow - function that splits a string into words.
 * @str: The input string
 * Return: a pointer
*/
char **strtow(char *str)
{
char **ptr, *tmp;
int i, j = 0, len = 0, words, c = 0, start, end;
while (*(str + len))
{
len++;
}
words = counter(str);
if (words == 0)
{
return (NULL);
}
ptr = (char **) malloc((words + 1) * sizeof(char *));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc((c + 1) * sizeof(char));
if (tmp == NULL)
{
return (NULL);
}
while (start < end)
{
*tmp++ = str[start++];
}
*tmp = '\0';
ptr[j] = tmp - c;
j++;
c = 0;
}
}
else if (c++ == 0)
{
start = i;
}
}
ptr[j] = NULL;
return (ptr);
}
