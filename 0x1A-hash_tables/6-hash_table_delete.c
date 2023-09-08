#include "hash_tables.h"
/**
 * free_node - This is a function that the free the node
 * @head: This is an argument that reprsent the head nodof head_node_t struct
 *
 * Return: This function return a void (nothing)
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * free_list - This is a function that free the list
 * @head: This is an argument that reprsent the head node struct
 *
 * Return: This function return a void (nothing)
 */
void free_list(hash_node_t *head)
{
	hash_node_t *tmp = head, *pre;

	while (tmp)
	{
		pre = tmp;
		tmp = tmp->next;

		free_node(pre);
	}
	free(tmp);
}
/**
 * hash_table_delete - This is a function that deletes a hash table.
 * @ht: This is an argument that reprsent the table struct
 *
 * Return: This function return a void (nothing)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (!tmp)
			continue;

		free_list(tmp);
	}
}
