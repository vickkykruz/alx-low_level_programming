#include "lists.h"
/**
 * get_nodeint_at_index - This is a function that returns the nth node of a
 * listint_t linked list.
 * @head: This is an argument that reoresent the head of the struct
 * @index: This is an argument that represent the given index
 *
 * Return: This function return thr nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	/* Check if the head contains a NULL */
	if (head == NULL)
		return (NULL);

	/* If the index given was 0 retun the head address */
	if (index == 0)
		return (head); /* The address the head contains */

	/** We loop each node to get the prev node of thr index */
	while (i < index - 1)
	{
		/* if the the node is not found by check NULL */
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}

	/* Once the prev node is found return the address of next node */
	return (head->next);
}
