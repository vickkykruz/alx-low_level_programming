#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - This is a function that print all the elements of the
 * dlistint_t list.
 * @h: This is an argument that represent the head of the dlistint_t struct
 *
 * Return: This function return the number of element passed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *tmp = h;

	/* if (tmp == NULL) */
		/* return (0); */

	for (i = 0; tmp; tmp = tmp->next, i++)
		printf("%d\n", tmp->n);
	return (i);
}
