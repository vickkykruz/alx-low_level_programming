#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - This is a function that frees a dlistint_t list.
 * @head: This is an argument that reprsent the head of the dlistint_t struct
 *
 * Return: This is function that return a free list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		tmp = head;
		/* free(tmp->n); */
		free(tmp);
		head = head->next;
	}
	free(head);
}
