#include "lists.h"
/**
 * list_len - This is a function that return the number of elements in a
 * linked list_t list.
 * @h: This is an argument that represent the struct of the linked list
 *
 * Return: This function return the total number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
