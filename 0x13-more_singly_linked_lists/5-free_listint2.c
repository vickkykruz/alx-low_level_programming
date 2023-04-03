#include "lists.h"
/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A given pointer of a struct listint_t
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (*head == NULL)
		return;

	current = *head;
	while ((temp = *head) != NULL)
	{
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
