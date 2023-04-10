#include "main.h"
/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: The given n value
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 or -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	/** Declaration of varaible **/
	unsigned long int mask;

	if (!n || index > 53)
		return (-1);

	/** Mask C operatiom */
	/* masking will be the result of ~(num(0 << index)) */
	mask = ~(0 << index);
	mask = *n & mask;
	/* mask = (*n & ~mask) | ((0 << index) & mask); */

	return (1);
}
