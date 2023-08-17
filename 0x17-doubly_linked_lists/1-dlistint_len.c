#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - This is a function that return the number of element in a
 * linked dlistint_t list
 * @h: This is an argument that reprsent the head of the dlistint_t struct
 *
 * Return: This function tha return the number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int i = 0;

	if (tmp == NULL)
		return (0);

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
