#include "search_algos.h"
/**
 * linear_search - This is a function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: This is an argument that reprsent the pointer to the first element
 * of the array to search in
 * @size: This is an argument that reprsent the number of elements in array
 * @value: This is an argument that reprsent the value to search for
 *
 * Return: This function return the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		/** Impleament the search **/
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}

	return (-1);
}
