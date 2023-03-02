#include "main.h"
/**
 * string_toupper - changes all lowercases to uppercases
 * @c: The input value
 * Return: c
*/
char *string_toupper(char *c)
{
int num = 0;
while (c[num] != '\0')
{
if (c[num] >= 97 && c[num] <= 122)
{
c[num] = c[num] - 32;
}
num++;
}
return (c);
}
