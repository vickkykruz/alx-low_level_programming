#include "main.h"
/**
 * _strlen - A function that get the total lenght of a string
 * @s: The givem string
 *
 * Return: The total lenght
*/

unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * binary_to_uint - A function that converts a binary number to an
 * unsigned int.
 * @b: The given binary number
 *
 * Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	/** Declaration Of Variables **/
	unsigned int b_index = 1;
	unsigned int value = 0;
	int i;
	unsigned int len;

	if (b == NULL)
		return (0);

	/** Get the lenght of the string **/
	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			value += b_index;
		}
		b_index *= 2;
	}
	return (value);
}
