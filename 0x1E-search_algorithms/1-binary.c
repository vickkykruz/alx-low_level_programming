#include "search_algos.h"
/**
 * recursive_search_fun - This is a function that earches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: This is an argument that reprsent a pointer to the first element
 * of the array to search in
 * @size: This is an argument that reprsent the is the number of elements in
 * array
 * @value: This is an argument that reprsent the the value to search for
 *
 * Return: This function return the index otherwise NULL
 */
int recursive_search_fun(int *array, size_t size, int value)
{
	size_t middle_idx = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (middle_idx && size % 2 == 0)
		middle_idx--;

	if (array[middle_idx] == value)
		return ((int)middle_idx);

	if (value < array[middle_idx])
		return (recursive_search_fun(array, middle_idx, value));
	middle_idx++;

	return (recursive_search_fun(array + middle_idx, size - middle_idx,
		value) + middle_idx);
}
/**
 * binary_search - This is a function that earches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: This is an argument that reprsent a pointer to the first element
 * of the array to search in
 * @size: This is an argument that reprsent the is the number of elements in
 * array
 * @value: This is an argument that reprsent the the value to search for
 *
 * Return: This function return the index otherwise NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = recursive_search_fun(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);
	return (idx);
}
