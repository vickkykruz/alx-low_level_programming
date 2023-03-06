#include "main.h"
/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack
 * @haystack: The input string
 * @needle: The input string value
 * Return: A pointer
*/

char *_strstr(char *haystack, char *needle)
{
int i, num, n;
i = 0;

if (needle[0] == '\0')
{
return (haystack);
}

while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
{
n = i, num = 0;
while (needle[num} != '\0')
{
if (haystack[n] == needle[num])
{
n++, num++;
}
else
{
break;
}
}
if (needle[num] == '\0')
{
return (haystack + i);
}
}
i++;
}
return (NULL);
}
