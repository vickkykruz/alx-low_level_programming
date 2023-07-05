#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - This is a function that frees a listint_t list.
 * @head: This is an argument that represent the HEAD of the struct list
 *
 * Return: This function is a void(it return nothing)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
	{
		return;
	}

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
