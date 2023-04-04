#include "lists.h"
/**
 * pop_listint - A function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: A given pointer from the struct listint_t
 *
 * Return: int
*/

int pop_listint(listint_t **head)
{
	/** Declarate a (temp) variable **/
	listint_t *temp;
	int data;

	if (!*head || !head)
		return (0);

	data = (*head)->n;
	/** Pass the first to temp **/
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
