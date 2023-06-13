#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - This is a function that creates an array of chars, and
 * initializes it with a specific char
 * @size: This is an argument that represent the amount of memory size
 * to be allocated
 * @c: This is an argument that reprent the datatype used for the
 * sizeof operator
 * Description: In this task i'm asked to allocate the memory for the program.
 * Return: This function will return a char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *prt;
	unsigned int i;

	if (size == 0)
		return (NULL);

	prt = (char *)  malloc(size * sizeof(c));
	if (prt == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		prt[i] = c;
	}


	return (prt);
}
