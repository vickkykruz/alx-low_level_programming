#include "lists.h"
#include <stdio.h>
/**
 * print_list - This is a function that print all the element of a list_t list
 * @h: This is an argument that represent the node structure list_t
 *
 * Return: This function return the total nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t num = 0; /* Counter */

	/* Check if the node *h is a null */
	if (h == NULL)
		return (0);

	/* Else we loop through the loop */
	while (h)
	{
		/* Print out the value of the element in each node */
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		printf("[%d] %s\n", h->len, h->str);

		/* Increament the node */
		h = h->next;
		num++;
	}

	/* Based on the condition != NULL we print the last node */
	/* printf("[%d] %s\n", h->len, h->str); */
	return (num);
}
