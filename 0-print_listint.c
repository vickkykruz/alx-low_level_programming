#include "lists.h"
#include <stdio.h>
/**
 *  print_listint - This is a function that prints all the elements of a
 *  listint_t list.
 *  @h: This is an argument that represent the heade of the listint_t list
 *
 *  Return: This function return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	/* printf("%d\n", h->n); */
	return (i);
}
