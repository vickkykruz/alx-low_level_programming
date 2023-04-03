#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning
 * of a listint_t list.
 * @head: The given pointer
 * @n: The data to be stored
 * Return: The sturct of listint_t
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	/** Aloocate the memory **/
	new_nodes = malloc(sizeof(listint_t));
	if (new_nodes == NULL)
		return (NULL);

	/** Operation to add the node at the beginning **/
	new_nodes->n = n;
	new_nodes->next = *head;

	*head = new_nodes;
	return (*head);
}
