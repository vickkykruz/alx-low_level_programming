#include "main.h"
/**
 * print_binary - A function that prints the binary representation of a number
 * @n: The given decimal number
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	/** Based on the fact that number given is covered to binary with the */
	/* Using of unsigned int long */
	if (n > 1)
		/* Here we are recuring the value and left shfting it */
		print_binary(n >> 1);

	/* Here at this point, vaildate using the & operator */
	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
