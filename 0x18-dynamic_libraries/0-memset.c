#include "main.h"
/**
 * _memset - fill the first n byte of the memory
 * @s: The input value of variable s
 * @b: The input value of variable b
 * @n: The byte of the memory
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int num;
for (num = 0; num < n; num++)
{
s[num] = b;
}
return (s);
}
