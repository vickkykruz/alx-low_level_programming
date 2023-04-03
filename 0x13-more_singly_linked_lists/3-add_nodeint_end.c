#include "lists.h"
/**
 * add_nodeint_end - A function that adds a new node
 * at the end of a listint_t list.
 * @head: The given pointer that point to the sturct listint_t
 * @n: The given data to be stored
 *
 * Return: The pointer
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/** Declartion Of Variables **/
	listint_t *new_node, *last_node;

	last_node = *head;
	/* Aloocate the memory to store datas for new_node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/** Pass In the Data **/
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		while (last_node->next)
		{
			last_node = last_node->next;
		}
	}

	last_node->next = new_node;
	return (*head);
}
