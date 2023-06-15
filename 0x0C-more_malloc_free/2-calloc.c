#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - This is a function that allocates memory for an array, using
 * malloc.
 * @nmemb: This is an argument that represent the given array of elements
 * @size: This is an argument thay represent the given memory size
 * Return: This return a pointer of the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, mul;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/** INITIALIZE EACH BLOCK OF MEMORY TO 0 **/
	mul = nmemb * size;
	for (i = 0; i < mul; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
