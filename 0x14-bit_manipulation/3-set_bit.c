#include "main.h"
/**
 * set_bit - This is a function that sets the value of a bit to 1 at a given
 * index.
 * @n: This is an argument that represent the given number
 * @index: This is an argument that represent thr given index of the number
 *
 * Return: This function return (1) if it works or (-1) if is does work
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || n == NULL)
		return (-1);


	return ((*n |= 1 << index) ? 1 : -1);
}
