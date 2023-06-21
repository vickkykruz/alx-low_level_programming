#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - This is a function that executes a function given as a
 * parameter on each element of an array.
 * @array: This is an argument that reprsent the given array
 * @size: This is am argument that reprsent the size of an array
 * @action: This is an argument that reprsent a pointer to the function used
 *
 * Return: The return type of this function is a void (nothing)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	/** A condition to check the given parameters **/
	if (array == NULL || size == 0 || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
