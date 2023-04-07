#include "lists.h"
/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * index of a listint_t linked list.
 * @head: A given pointer address
 * @index: Position of the index
 * Return: int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = NULL;
	size_t count = 0;

	/** Condition **/
	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous);
		/* current = NULL; */
		return (1);
	}

	while (count < index - 1)
	{
		if (!previous || !(previous->next))
			return (-1);
		/* previous = current; */
		/* current = current->next; */
		previous = previous->next;
		count++;
	}
	current = previous->next;
	previous->next = current->next;
	free(current);
	/* current = NULL; */
	return (1);
}