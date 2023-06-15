#include "main.h"
#include <stdlib.h>
/**
 * array_range - This is a function that creates an array of integers.
 * @min: This is an argument the represent the given minimume value
 * @max: This is an argument that represent the given maxmium value
 * Return: This function returs the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
