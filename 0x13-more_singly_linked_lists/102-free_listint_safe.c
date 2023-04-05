#include "lists.h"
/**
 * free_listint_safe - A function that frees a listint_t list
 * @h: A given pointer
 * Return: size_t type
*/

size_t free_listint_safe(listint_t **h)
{
	/** The Declaration of Variable Needed **/
	size_t length = 0;
	int diff; /** Use to calcalate the stuct listint_t data **/
	listint_t *tmp;

	/** Validate if *h exist */
	if (!h || !*h)
		return (0);

	/** Iterarte the loop **/
	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = NULL;
			*h = tmp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
		}
	}
	*h = NULL;

	return (length);
}
