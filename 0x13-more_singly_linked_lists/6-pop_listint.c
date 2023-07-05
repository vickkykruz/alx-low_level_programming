#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Thisbis a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: This is an argument that represent the HEAD of the linked list
 * struct
 *
 * Return: This function return the number of the HEAD node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	tmp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = tmp;

	return (num);
}
