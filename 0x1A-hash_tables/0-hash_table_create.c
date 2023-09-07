#include "hash_tables.h"
/**
 * hash_table_create - This is a function that creates a hash table
 * @size: This ks an argument that reprsent the size of the array
 *
 * Return: This function a new pointer contain the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* Decleration of the variables */
	hash_table_t *table;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(char *) * size);
	if (!table->array)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
