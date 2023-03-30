#include "lists.h"
/**
 * free_list - A function that frees a list_t list.
 * @head: A pointer that to the data type struct list_t
 * Return: Void
*/

void free_list(list_t *head)
{
	list_t *current_list;

	/** LOOP THROGH EACH POINTER TO FREE **/
	while ((current_list = head) != NULL)
	{
		head = head->next;
		free(current_list->str);
		free(current_list);
	}
}
