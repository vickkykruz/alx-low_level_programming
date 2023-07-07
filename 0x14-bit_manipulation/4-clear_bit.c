#include "main.h"
/**
 * clear_bit - This is a function that sets the value of a bit to 0 at a given
 * index.
 * @n: This is an argument that reprsent the number to be given
 * @index: This is an argument that reprsent the index of the number
 *
 * Return: This function return (1) if it works and (-1) if doesn't work
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int cls_bit;

	if (index > 53 || n == NULL)
		return (-1);

	cls_bit = 1 << index;
	*n = (*n & ~cls_bit) | (cls_bit & (0 << index));

	return (1);
}
