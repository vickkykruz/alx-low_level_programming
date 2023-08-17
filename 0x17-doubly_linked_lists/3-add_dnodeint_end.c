#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_t *add_dnodeint_end - This is a function that adds a new node at
 * the end of a dlistint_t list.
 * @head: This is an argument that reprsent the head of the dlistint_t struct
 * @n: This is an argument that reprsent the data to be store in each node
 *
 * Return: This function return a pointer containting the new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (tmp == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (*head);
}
