#include "lists.h"
/**
 * listint_len - This is a function that returns the number of elements in a
 * linked listint_t list.
 * @h: This is an argument that represent the head listint_t list struct
 *
 * Return: This function return the total number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
