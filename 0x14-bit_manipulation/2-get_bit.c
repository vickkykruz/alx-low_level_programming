#include "main.h"
/**
 * get_bit - This is a function that returns the value of a bit at a given
 * index.
 * @n: This is an argument that respresent the given number
 * @index: This is an argument that represnt the index of the number
 *
 * Return: This is to return in exact binary value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Condition is to check if the index is not greater than 53 */
	if (index > 53)
		return (-1);

	return (1 & (n >> index));
}
