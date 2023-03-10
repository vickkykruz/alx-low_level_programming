#include "main.h"
/**
 * _memcpy - copies the memory area
 * @dest: the destination input
 * @src: The source input
 * @n: The number of bytes input
 * Return: Return dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int num = n;

if (num > 0)
{
int i;
for (i = 0; i < num; i++)
{
dest[i] = src[i];
}
}
return (dest);
}
