#include "lists.h"
/**
 * sum_listint - This is a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: This is an argument that reprsent the head of the list struct
 *
 * Return: This function return the wun of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
