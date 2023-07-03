#include "lists.h"
#include <stdlib.h>
/**
 * free_list - This is a function that frees a list_t list.
 * @head: This is an argument that represent the HEAD of the linked list
 * struct
 *
 * Return: This function return a void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;/* Initizing each node to tmp */
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
