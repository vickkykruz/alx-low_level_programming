#include "main.h"
/**
 * flip_bits - This is a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: This is an argument that reprsent the number passed to the function
 * @m: This is an argument that reprsent the given index of the number
 *
 * Return: This function return the nunber of bits to be flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int i = 0, res = 0;

	num = sizeof(unsigned long int) * 8;/* get the total of 8 bits */

	while (i < num)
	{
		if ((1 & m) != (1 & n))
			res++;

		/** Increment it by right shiting the bits **/
		n = n >> 1;
		m = m >> 1;
		i++;
	}

	return (res);
}
