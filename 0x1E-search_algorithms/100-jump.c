#include "search_algos.h"
/**
 * min - This is a function that finds the smallest between two numbers
 * @j: This is an argument that represent the first number
 * @k: This is an argument that represent the second number
 *
 * Return: This is a function that return the smallest number
 */
size_t min(size_t j, size_t k)
{
	if (j > k)
		return (k);
	else
		return (j);
}
/**
 * jump_search - This is a function that searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: This is an argument that represent a pointer to the first element
 * of the array to search in
 * @size: This is an argument that represent the number of elements in array
 * @value: This is an argument that reprsent the value to search for
 *
 * Return: This function return the index of the value otherwise NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j = 0, k = sqrt(size);

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	while (array[min(k, size)] < value)
	{
		j = k;
		k += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (j > size - 1)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, k);

	while (array[j] <= value)
	{

		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		if (j > size - 1)
			break;
		j++;
	}
	return (-1);
}
