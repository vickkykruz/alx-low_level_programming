#include "search_algos.h"
/**
 * b_search - This is an argument that performs a binary search
 * @array: This is an argument that reprsent a pointer to the first
 * element of the array to search in
 * @start: This is an argument that reprsent the start index
 * @end: This is an argument that reprsent the end index
 * @value: This is an argument that reprsent yhe value to search for
 *
 * Return: This function retun the index of the value othereise (-1);
 */
int b_search(int *array, size_t start, size_t end, int value)
{
/**
 * exponential_search - This is a function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: This is an argument that reprsent a pointer to the first element
 * of the array to search in
 * @size: This is an argument that reprsent the number of elements in array
 * @value: This is an argument that reprsent the value to search for
 *
 * Return: This function return the index of the value otherwise NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, range = 1;

	if (!array)
		return (-1);

	while (range < size && array[range] < value)
	{
		printf("Value checked array[%ld] = [%d]\n" range,
				array[range]);
		range *= 2;
	}

	start = range / 2;
	end = _min(range + 1, size) - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);


	return (b_search(array, start, end, value));
}
