#include "main.h"
#define NULL 0

/**
 * _strpbrk - function locates the first
 * occurrence in string s of any of the byte
 * @s: The input string
 * @accept: the target string match
 * Return: a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
int i, num;
i = 0;

while (s[i] != '\0')
{
for (num = 0; accept[num] != '\0'; num++)
{
if (s[i] == accept[num])
{
s = &s[i];
return (s);
}
}
i++;
}
return (NULL);
}
