#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - This is a function that adds a new node at the beginning of a
 * list_t list.
 * @head: This is an argument that represent the HEAD of the struct linked
 * list
 * @str: This is an argument that represent the data store in the data struct
 *
 * Return: This function the new allocated address.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	if (str == NULL)
		len = 0;

	while (str[len])
		len++;

	/* Allocate the memory for the new_node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/** Initixatee the data ti the struct elements */
	new_node->str = strdup(str);
	new_node->len = len;

	/* Check if the previous HEAD node was a NULL */
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;
	return (*head);
}
