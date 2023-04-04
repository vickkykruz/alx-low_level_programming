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
	listint_t *current = *head;
	size_t count = 0;

	/** Condition **/
	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	while (count < index - 1)
	{
		previous = current;
		current = current->next;
		count++;
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
