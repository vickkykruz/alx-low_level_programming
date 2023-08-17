#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - This is a function that inserts a new node at a
 * given position.
 * @h: This is an argument that reprsent the head of the dlistint_t struct
 * @idx: This is an argument that reprsent the given index
 * @n: This is an argument that the number to be stored in the new node
 *
 * Return: This function return the pointer contain the new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp = *h;
	unsigned int i;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!tmp)
				return (NULL);
			tmp = tmp->next;
		}

		if (!tmp->next)
			new_node = add_dnodeint_end(h, n);
		else
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);

			new_node->n = n;
			new_node->prev = tmp;
			new_node->next = tmp->next;
			tmp->next->prev = new_node;
			tmp->next = new_node;
		}
	}
	return (new_node);
}
