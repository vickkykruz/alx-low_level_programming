#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - This is a function that free_listint_safe.
 * @h: This is an argument that the head pointer of the list struct
 *
 * Return: This functiin return the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp = NULL;
	size_t i = 0;
	int num;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		/* Get the exect address by diff the head and next */
		num = *h - (*h)->next;
		if (num > 0)
		{
			/** Free the head node */
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
