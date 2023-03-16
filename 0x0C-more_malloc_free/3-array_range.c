#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: the minmuim value
 * @max: the maximum value
 * Return: pointer
*/

int *array_range(int min, int max)
{
int *ptr, i = 0;

if (min > max)
{
return (NULL);
}

ptr = malloc(sizeof(int) * (max - min + 1));
if (!ptr)
{
return (NULL);
}

while (i <= max - min)
{
ptr[i++] = min++;
}
return (ptr);
}
