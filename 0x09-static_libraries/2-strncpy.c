#include "main.h"
/**
 * _strncpy - use to copy strings
 * @dest: The description input
 * @src: The source input
 * @n: The amount of values displayed
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int num;
num = 0;

while (num < n && src[num] != '\0')
{
dest[num] = src[num];
num++;
}
while (num < n)
{
dest[num] = '\0';
num++;
}
return (dest);
}
