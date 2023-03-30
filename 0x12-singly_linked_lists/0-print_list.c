#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: is a pointer to the struct list_t
 *
 * Return: 0
*/

size_t print_list(const list_t *h)
{
	size_t counter = 1;

	/* OPERATION PERMFORED */
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (counter);
}
