#include "main.h"
/**
 * binary_to_uint - This is a function that converts a binary number to an
 * unsigned int. (decimal)
 * @b: This is an argument of a pointer that contains the exact value the
 * pointer hold...
 *
 * Return: This function convert the value as binary to decimal (unsigned
 * int)
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0; /* A variable that get the total index of the value */
	unsigned int sum = 0, place = 1;
	/* This place used to the mutiplication of 2 by there index */
	/* The sum is used to add the position of that index once is == 1 */

	if (b == NULL)
		return (0);

	while (b[i])
		i++;

	i--;
	for (; i >= 0; i--) /* Iterated the index from the back */
	{
		/* Condition is if the index is 0, mutiply the plcae by 2 */
		if (b[i] == '0')
		{
			place *= 2;
			continue; /* continue the loop */
		}
		else if (b[i] == '1')
		{
			sum += place;/* whatever value it hold by index sum */
			place *= 2;
			continue;
		}
		return (0);/* if the index don't contain 1 or 0 */
	}
	return (sum);/* Return the deceimal value */
}
