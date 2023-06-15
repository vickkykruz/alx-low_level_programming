#include "main.h"
#include <stdlib.h>
/**
 * _realloc - This is is a function that reallocates a memory block using
 * malloc and free
 * @ptr: This ia an argument that reprsent the pervious memory allocated
 * @old_size: This is an argument that represent the prevoius amount of memory
 * allocated
 * @new_size: This is an argument that represent the new amount of memory
 * to be allocated
 * Return: This returm the new allocated block of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *tmp;
	unsigned int i;

	if (new_size == old_size)
		return (NULL);

	if (ptr ==  NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate memory for thr new size of memory */
	/* Since the condition are meet */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	tmp = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = tmp[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = tmp[i];
	}
	/* free(tmp); */
	free(ptr);
	return (new_ptr);
}
