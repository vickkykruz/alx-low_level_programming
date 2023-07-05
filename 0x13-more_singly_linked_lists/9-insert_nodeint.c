#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - This is a function that inserts a new node at a
 * given position.
 * @head: This is an argument that represent the HEAD of the struct list
 * @idx: This is an argument that represent the given index
 * @n: This is an argument that represent the data to be store in the struct
 *
 * Return: This function return the new allocated address or the new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node;
	unsigned int i = 0;

	tmp = *head;
	if (*head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}

	while (i < idx - 1)
	{
		if (tmp->next == NULL || tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}

	/** Swap the node **/
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
