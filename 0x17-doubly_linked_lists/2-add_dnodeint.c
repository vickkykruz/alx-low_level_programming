#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - This is the function that adds a new node at the beginning
 * of a dlistint_t list.
 * @head: This is an argument that reprsent the head of the dlistint_t struct
 * @n: This is an argument that represent the data stored in each node
 *
 * Return: This function return a pointer that contain a new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = (*head);

	if (tmp != NULL)
		(*head)->prev = new_node;

	return ((*head) = new_node);
}
