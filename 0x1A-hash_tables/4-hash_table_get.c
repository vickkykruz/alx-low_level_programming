#include "hash_tables.h"
/**
 * hash_table_get - This is a function that retrieves the value associated
 * with a key
 * @ht: This is an argument that reprsent the hash table
 * @key: This is an argument that reprsent the the key
 *
 * Return: This function return the value associated with key otherwise
 * NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head, *temp;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	head = ht->array[index];
	if (!head)
		return (NULL);

	if (strcmp(head->key, key) == 0)
		return (head->value);

	if (!head->next)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}
