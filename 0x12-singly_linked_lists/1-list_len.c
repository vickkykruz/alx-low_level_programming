#include "lists.h"
/**
 * list_len - A function that returns the number of elements
 *  in a linked list_t list.
 *  @h: A pointer to the list_t struct
 *
 *  Return: 0
*/

size_t list_len(const list_t *h)
{
	size_t counter = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
