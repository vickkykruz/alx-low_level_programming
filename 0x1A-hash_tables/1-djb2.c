/**
 * hash_djb2 - This is a function that return implemented the djb2 algorithm
 * @str: This is argument that reprsent the given string
 *
 * Return: This is function that return the djb2 algorthim
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
