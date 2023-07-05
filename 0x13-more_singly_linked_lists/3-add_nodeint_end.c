#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - This is a function that adds a new node at the end of a
 * listint_t list.
 * @head: This is an argument that represent the HEAD of the listint_t list
 * struct
 * @n: This is an argument that reprsent the data to be stored thr each node
 *
 * Return: This function return a new singly list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	/* Allocate a block of memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initalize the data to the new node */
	new_node->n = n;
	/* Since the new node is the last node we say*/
	new_node->next = NULL;

	/* Place the new node to the last node */
	if (tmp == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (*head);
}
