#include "hash_tables.h"
/**
 * hash_table_print - This is a function that prints a hash table
 * @ht: This is an argumemt that reprsent the hash table
 *
 * Return: This function return a void (nothing)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, len;
	hash_node_t *head;
	char *ch = NULL;

	if (!ht)
		return;

	ch = realloc_res(ch, "{");

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (!head)
			continue;

		while (head)
		{
			ch = realloc_res(ch, "'");
			ch = realloc_res(ch, head->key);
			ch = realloc_res(ch, "': '");
			ch = realloc_res(ch, head->value);
			ch = realloc_res(ch, "', ");

			head = head->next;
		}
	}

	len = strlen(ch);

	if (len > 1)
	{
		ch[len - 2] = '\0';
		ch[len - 1] = '\0';
	}

	ch = realloc_res(ch, "}");
	printf("%s\n", ch);

	free(ch);
}
/**
 * realloc_res - This is a function that allocates a new space for ch and
 * concatenates the new string to ch
 * @res: This is an argument that reprsent the previous string
 * @str: This is an argument that reorsent the string to concat
 *
 * Return: The function return a pointer to res or NULL
 */
char *realloc_res(char *res, char *str)
{
	char *new;
	unsigned int i, j;

	if (!res)
	{
		res = strdup(str);
		return (res);
	}

	new = strdup(res);
	free(res);
	res = malloc((strlen(new) + strlen(str) + 1) * sizeof(char));
	if (!res)
		return (NULL);

	for (i = 0; i < strlen(new); i++)
		res[i] = new[i];

	for (j = 0; j < strlen(str); j++, i++)
		res[i] = str[j];

	res[i] = '\0';

	free(new);

	return (res);
}
