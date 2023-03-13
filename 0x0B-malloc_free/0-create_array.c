#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars,
 * initalize it with a special char
 * @size: The size of the memmory
 * @c: The input value
 * Return: the char value
*/

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if (size == '0')
{
return (NULL);
}

ptr = (char *) malloc(size * sizeof(c));
if (ptr == 0)
{
return (NULL);
}

/* Perform the operation*/
i = 0;

while (i < size)
{
ptr[i] = c;
i++;
}
return (ptr);
}
