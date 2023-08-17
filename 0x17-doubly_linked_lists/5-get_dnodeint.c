#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - This is a function that returns the nth node of a
 * dlistint_t linked list.
 * @head: This is an argument that reprsent the head of the dlistint_t struct
 * @index: This is an argument that reprsent the index of the node
 *
 * Return: This function return the data stored on the node index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
	}
	return (tmp);
}
