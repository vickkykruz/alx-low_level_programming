#include "main.h"
/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The given number
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index > 53)
		return (-1);

	/** This wll return the index of number */
	return ((n & (1 << index)) != 0);
}
