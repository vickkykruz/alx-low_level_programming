#include "lists.h"
/**
 * add_node_end - A function that adds a new node at the end of a list_t list
 * @head: A pointer that has the data type struct list_t
 * @str: The input string
 *
 * Return: A pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/** BASE ON THE PREVIOUS TASK ***/
	list_t *new_nodes, *temp;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
		return (NULL);

	new_nodes->str = strdup(str);
	new_nodes->len = str_len;
	new_nodes->next = NULL;

	/**** OPERATION STARTS ****/
	/** PASS THE STARTING POINTER TO (temp) ***/
	temp = *head;

	/** IF THE (temp) IS NULL, WE PLACE THE (new_nodes) AT START */
	if (temp == NULL)
		*head = new_nodes;
	else
	{
		/** WE PLACE OUR (new_node) TO (temp->next) USING A LOOP **/
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_nodes;
	}
	return (*head);
}

