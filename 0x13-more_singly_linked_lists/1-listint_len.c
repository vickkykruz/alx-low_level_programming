#include "lists.h"
/**
 * listint_len - A function that returns the number
 *  of elements in a linked listint_t list.
 * @h: A pointer that point to the listint_t
 * Return: counter
*/

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
