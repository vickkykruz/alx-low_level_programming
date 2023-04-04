#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns the nth node
 * of a listint_t linked list.
 * @head: The given pointer
 * @index: The given nth index
 *
 * Return: The pointer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current = head;

	/** To check if node exits **/
	if (!head)
		return (NULL);

	while (current != NULL)
	{
		if (counter == index)
			head = current;
		counter++;
		current = current->next;
	}
	return (head);
}
