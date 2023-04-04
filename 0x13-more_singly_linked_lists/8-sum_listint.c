#include "lists.h"
/**
 * sum_listint - A function that returns the sum of all the data (n) of a
 * @head: A given pointer from the struct listint_t
 *
 * Return: int
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
