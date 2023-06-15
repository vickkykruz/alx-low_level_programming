#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - This is a function that allocates memory using malloc
 * @b: This is an argument that rprsent the given number of space to be
 * allocated in the memmory
 * Return: This return the pointer otherwise the exit termination with
 * the status code 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* if ( b == 0) */
		/* return; */

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
