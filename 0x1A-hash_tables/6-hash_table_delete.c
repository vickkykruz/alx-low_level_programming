#include "hash_tables.h"
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

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
