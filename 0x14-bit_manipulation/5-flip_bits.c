#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - A function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the number A
 * @m: the number B
 *
 * Return: value
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (!n)
		return (-1);
	if (!m)
		return (-1);

	int i = 0;
	unsigned int counter;
	unsigned long int result, *ptr;

	ptr = malloc(sizeof(unsigned long int) * 1);
	result = n ^ m;
	*ptr = result;

	while (i > 0)
	{
		if (ptr[i] == 1)
			counter++;
	}
	return (counter);
}
