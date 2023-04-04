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
	size_t counter = 0;
	listint_t *temp = head;

	while (temp && counter < index)
	{
		temp = temp->next;
		counter++;
	}

	return (temp ? temp : NULL);
