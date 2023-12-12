#include "search_algos.h"
/**
 * get_at_index - This is a function that gets a value at an index in a
 * singly linked list
 * @list: This is an argument that reprsent the list to search
 * @index: This is an argument that reprsent the index to get
 *
 * Return: the value ant index or -1
 */
listint_t *get_at_index(listint_t *list, size_t index)
{
	listint_t *temp = list;

	while (temp)
	{
		if (temp->index == index)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}
/**
 * min_ - This is a function that finds the smallest between two numbers
 * @a: This is an argument that reprsent the first number
 * @b: This is an argument that reprsent the second number
 *
 * Return: This function return the smallest number
 */
size_t min_(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
/**
 * jump_list - This is a function that searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 * @list: This is an argument that reprsent a pointer to the head of the list
 * to search in
 * @size: This is an argument that reprsent the number of nodes in list
 * @value: This is an argument that reprsent the value to search for
 *
 * Return: This function return the index of the value otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t a = 0, b = sqrt(size);
	listint_t *temp;

	if (!list)
		return (NULL);

	temp = get_at_index(list, b);
	printf("Value checked at index [%ld] = [%d]\n", b, temp->n);
	while (temp->n < value)
	{
		a = b;
		b += sqrt(size);
		temp = get_at_index(list, min_(b, size - 1));
		if (b >= size - 1)
			break;
		printf("Value checked at index [%ld] = [%d]\n", min_(b, size - 1), temp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, min_(b, size - 1));

	temp = get_at_index(list, a);
	while (temp->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n", a, temp->n);
		if (temp->n == value)
			return (temp);
		a++;
		if (a > size - 1)
			break;
		temp = get_at_index(list, a);
	}
	return (NULL);
}
