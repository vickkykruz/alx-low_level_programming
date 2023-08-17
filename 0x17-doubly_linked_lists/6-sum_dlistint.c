#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - This is a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: This is an argument that reprsent the head of the dlistint_t struct
 *
 * Return: This function return the sum of the data store in each node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (!tmp)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
