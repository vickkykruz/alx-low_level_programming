#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - This is a function that searches for an integer.
 * @array: This is an argument that holds the elements in an array
 * @size: This is an argument that holds the total number of elements in an
 * array
 * @cmp: This is an argument that reprsent the pointer to the function
 *
 * Return: This function the index number of the search result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/** Checking paraments **/
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
