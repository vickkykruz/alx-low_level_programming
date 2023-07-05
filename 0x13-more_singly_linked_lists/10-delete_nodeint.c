#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - This is function that deletes the node at index
 * index of a listint_t linked list.
 * @head: This is an argument that represent the head struct of the list
 * @index: This is an argument that represent the given index
 *
 * Return: This function return the linked list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *intial_tmp = NULL;
	listint_t *tmp;
	unsigned int i = 0;

	tmp = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (tmp->next == NULL || tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}

	intial_tmp = tmp->next;
	tmp->next = tmp->next->next; /* get the address after the free addr */
	free(intial_tmp);
	return (1);
}
