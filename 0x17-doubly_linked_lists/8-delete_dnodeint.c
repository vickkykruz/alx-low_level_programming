#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - This is a function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: This is an argument that reprsent the head of the dlistint_t struct
 * @index: This is an argument that reprsent the given index
 *
 * Return: This function return 1 if success otherwise -1 as failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *ptr;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (!tmp)
				return (-1);
			tmp = tmp->next;
		}
		ptr = tmp->next;
		tmp->next = tmp->next->next;
		if (ptr->next)
			tmp->next->prev = tmp;
	}
	free(ptr);
	return (i);
}
