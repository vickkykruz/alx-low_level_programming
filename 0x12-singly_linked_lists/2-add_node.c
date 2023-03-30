#include "lists.h"
/**
 * add_node - A function that adds a new node at the
 *  beginning of a list_t list.
 *  @head: The pointer of the struct list_t
 *  @str: The inpit strings
 *
 *  Return: pointer
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes;
	size_t str_len = 0;

	/* Validate if the str is NULL will set the lenght to be  0 */
	if (str == NULL)
		str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	/* Allocate the memory for new_nodes */
	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
		return (NULL);

	/******** OPERATION BEGIN *********/
	/**
	 * NOW WE HAVE CREATE THE MEMORY FOR new_nodes WE INITALIZE
	 * THE ADDERESS OF THE NEXT NODE.
	 */

	/** VALIDATE THE HEAD FOR THE NEXT NODE **/
	if (*head == NULL)
		new_nodes->next = NULL;
	else
		new_nodes->next = *head;
	new_nodes->str = strdup(str);
	new_nodes->len = str_len;
	/*** WE THE TEMP POINTER (new_nodes) BACK TO head ***/
	*head = new_nodes;
	return (*head);
}
