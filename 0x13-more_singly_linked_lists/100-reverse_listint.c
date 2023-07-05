#include "lists.h"
/**
 * reverse_listint - This is a function that reverses a listint_t linked list.
 * @head: This is an argument that represent the head of the list struct
 *
 * Return: This function return the reeversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	/* Create two pointer of the data type listint_t struct */
	listint_t  *prev_ptr = NULL;
	listint_t *next_ptr = NULL;

	while (*head)
	{
		next_ptr = (*head)->next; /* store the address of next node */
		(*head)->next = prev_ptr; /* intized NULL to the next */
		prev_ptr = *head; /* hold the exact address of the node */
		*head = next_ptr;
	}

	/** Once the node is null */
	*head = prev_ptr;
	return (*head);
}
