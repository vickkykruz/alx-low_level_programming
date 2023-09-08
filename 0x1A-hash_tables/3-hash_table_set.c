#include "hash_tables.h"
/**
 * hash_table_set - This is a function that adds an element to the hash table
 * @ht: This is an argument that reprsent the hash table
 * @key: This is an argument that reprsent the key
 * @value: This is an argument that reprsent the value
 *
 * Return: This function return 0 if suceeded and 1 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *new, *temp;
	unsigned long int index;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index], temp = head;
	if (!head)
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		ht->array[index] = new;
		return (1);
	}
	if (strcmp(head->key, key) == 0)
	{
		free(head->value);
		head->value = strdup(value);
		return (1);
	}
	if (head->next)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}
	return (handle_collision(ht, index, key, value));
}

/**
 * handle_collision - This is a function that handles collision in inserting
 * to a hash table
 * @table: This is an argument that reprsent the hash table
 * @index: This is an argument that reprsent the index where the collision
 * occured
 * @key: This is an argument that reprsent the given  key
 * @value: This is an argument that reprsent the given value
 *
 * Return:This function return 1 if successfull and 0 otherwise
 */
int handle_collision(hash_table_t *table, unsigned long int index,
		     const char *key, const char *value)
{
	hash_node_t *head, *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	head = table->array[index];

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = head;
	table->array[index] = new_node;

	head = table->array[index];

	return (1);
}
