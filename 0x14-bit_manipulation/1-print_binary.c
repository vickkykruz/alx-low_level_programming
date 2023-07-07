#include "main.h"
/**
 * print_binary - This is a function that prints the binary representation of
 * a number.
 * @n: This is an argument that reprsent the given demical value
 *
 * Return: This function return the coverted binary number
 */
void print_binary(unsigned long int n)
{
	/* Check if the number pased is not anywhere lower than 1 */
	/* Using recursion method: Base conditon */

	if (n > 1)
		print_binary(n >> 1);/* Dividing the num by 1 */

	/* check for reminder using the & operator */
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
