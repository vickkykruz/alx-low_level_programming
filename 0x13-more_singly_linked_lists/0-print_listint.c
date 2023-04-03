#include "lists.h"
/**
 * print_listint - A function that prints all the elements
 *  of a listint_t list.
 *  @h: A pointer of the struct listint_t
 *  Return: counter
*/

size_t print_listint(const listint_t *h)
{
	/** Declartion Of Variables **/
	size_t counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
