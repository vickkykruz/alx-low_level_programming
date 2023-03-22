#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - function that executes a
 *  function given as a parameter on each element of an array.
 *  @array: The given array
 *  @size: The given array size
 *  @action: The pointer that pointsto function
 *  Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Declaration Of Variables */
	unsigned int i;
	/* Condition If Not */
	if (!array || !action)
		return;
	/* Loop through the array */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
