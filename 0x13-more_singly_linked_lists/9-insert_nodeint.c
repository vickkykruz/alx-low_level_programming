#include "lists.h"
/**
 * insert_nodeint_at_index - A function that inserts a new node at a
 * given position.
 * @head: A given pointer that point to the stuct listint_t
 * @idx: The index to the given position of the node in the lists.
 * @n: The data to be stored
 *
 * Return: pointer
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int counter = 0;

	temp = *head;

	if (idx != 0)
	{
		for (counter = 0; counter < idx - 1 && temp != NULL; counter++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
