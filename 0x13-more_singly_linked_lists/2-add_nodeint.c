#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - This is a function that adds a new node at the beginning of a
 * listint_t list.
 * @head: This is an agrument that represent the head of the listint_t struct
 * @n: This is an argument that reprsent the data to be store in each node in
 * the struct listint_t
 *
 * Return: This function return the new allocated address of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* if (*head == NULL)*/
		/*return (NULL);*/

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
