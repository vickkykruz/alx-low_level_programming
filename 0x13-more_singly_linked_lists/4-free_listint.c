#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - This is a function that frees a listint_t list.
 * @head: This is an argument that reprsent the HEAD of the listint_t struct
 *
 * Return: This function return the free allocated space
 */
void free_listint(listint_t *head)
{
	listint_t *tmp; /* To hold the address of the allocated space */

	while (head)
	{
		tmp = head->next; /* Store the address of the next node */
		free(head);/* free the cureent node */
		head = tmp;/* assign the address of the next to HEAD */
	}
}
