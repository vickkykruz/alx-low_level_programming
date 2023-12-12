#include "search_algos.h"
/**
 * recursive_search - This is a function that perform a binary search
 * @array: This is an argument that reprsent a pointer to the first element
 * @start: This is an argument that reprsent the start index to search
 * @end: This is an argument that reprsent the end index to search
 * @value: This is an argument that represent the value to search for
 *
 * Return: This is a function that return the index if the element is found
 * otherwise -1
 */
int recursive_search(int *array, size_t start, size_t end, int value)
{
	size_t i, middle = (start + end) / 2;
	int check, num;

	if (start > end)
		return (-1);
	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");

	num = array[middle];

	if (num == value)
	{
		if (middle == 0 || array[middle - 1] != value)
			return (middle);
		check = recursive_search(array, start, middle, value);
		return (check);
	}
	else if (num > value)
		return (recursive_search(array, start, middle - 1, value));
	else
		return (recursive_search(array, middle + 1, end, value));
}
/**
 * advanced_binary - This is a function that searches for a value in a sorted
 * array of integers.
 * @array: This is an argument that represent a pointer to the first element
 * of the array to search in
 * @size: This is an argument that represent the number of elements in array
 * @value: This is an argument that the value to search for
 *
 * Return: This functon return the index of the value otherwise NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}
