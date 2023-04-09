#include "main.h"
/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: The given number
 * @index: Where index is starting from 0 on the bit you want to set
 *
 * Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);

	if (index > 53)
		return (-1);

	/** We return the set bit o the value **/
	return (*n |= (1 << index));
}
