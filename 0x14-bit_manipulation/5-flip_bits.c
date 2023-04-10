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
	unsigned int counter;

	if (!n)
		return (-1);

	if (!m)
		return (-1);

	counter = __builtin_popcount(n ^ m);
	return (counter);
}
