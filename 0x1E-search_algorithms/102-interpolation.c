#include "search_algos.h"
/**
 * interpolation_search - This is an argument that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm
 * @array: This is an argument that reprsent a pointer to the first element of
 * the array to search in
 * @size: This is an argument that represent the number of elements in array
 * @value: This is an argument that represent the value to search for
 *
 * Return: This is a function that return the index of the value otherwise
 * NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low = 0, high = size - 1;

	if (!array)
		return (-1);

	while ((array[high] != array[low]))
	{
		position = low + (
			((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		if (position >= size)
		{
			printf("Value checked array[%ld] is out of range\n",
				position);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n",
				position, array[position]);

		if (array[position] < value)
			low = position + 1;
		else if (value < array[position])
			high = position - 1;
		else
			return (position);
	}

	if (array[low] == value)
		return (low);
	else
		return (-1);
}
