#include "hash_tables.h"
/**
 * key_index - This function that gives you the index of a key.
 * @key: This is a function that reprsent the given key
 * @size: This is a function that reprsent the given size of the struct
 *
 * Return: This function return the index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashes = hash_djb2(key);

	return (hashes % size);
}
