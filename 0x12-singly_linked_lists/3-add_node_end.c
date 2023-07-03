#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - This is a function that adds a new node at the end of a
 * list_t list.
 * @head: This is an argument that represent the HEAD of the struct list_t
 * list
 * @str: This is an argument that reoresent the given string
 * Return: This function return the new allocated address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	size_t len = 0;

	if (str == NULL)
		len = 0;

	while (str[len] != '\0')
		len++;

	/** Allocate memory to new_node **/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/** Intialize the data to the struct */
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL; /* Idenicate the last node */

	/*Create a copy of the *head node*/
	tmp = *head;
	if (tmp == NULL)
		*head = new_node;
	else
	{
		/* if the list came as a large data*/
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (*head);
}
