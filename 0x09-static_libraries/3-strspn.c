#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: The input string
 * @accept: The input target
 * Return: The number of bytes
*/

unsigned int _strspn(char *s, char *accept)
int i = 0, num;
int corr = 0;

while (s[i] != '\0')
{
for (num = 0; accept[num] != '\0' num++)
{
if (s[i] == accept[num])
{
corr++;
break;
}
if (accept[num + 1] == '\0' && s[i] != accept[num])
{
return (corr);
}
}
i++;
}
return (corr);
}
