#include "lists.h"
/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: A given pointer of stuct lostint_t
 *
 * Return: pointer
*/

listint_t *reverse_listint(listint_t **head)
{
	/** Variable Declaration **/
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (!*head)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
