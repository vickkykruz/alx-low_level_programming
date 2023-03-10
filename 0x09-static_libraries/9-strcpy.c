#include "main.h"
/**
 * _strcpy - copied function
 * @dest: The input description
 * @src: The input source
 * Return: Pointer type
*/
char *_strcpy(char *dest, char *src)
{
int num = -1;
do {
num++;
dest[num] = src[num];
} while (src[num] != '\0');
return (dest);
}
