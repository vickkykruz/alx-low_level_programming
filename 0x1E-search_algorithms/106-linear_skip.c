#include "search_algos.h"

/**
 * linear_skip - This is a function that searches for a value in a skip list
 * @list: This is an argument that reprsent the input list
 * @value: This is an argument that reprsent the value to search
 *
 * Return: This function return the index of the value otherwise -1
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp;

	if (list == NULL)
		return (NULL);

	temp = list;

	do {
		list = temp;
		temp = temp->express;
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	} while (temp->express && temp->n < value);

	if (!temp->express)
	{
		list = temp;
		while (temp->next)
			temp = temp->next;
	}

	printf("Value found between indexes [%ld] and ", list->index);
	printf("[%ld]\n", temp->index);

	while (list != temp->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
