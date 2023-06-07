#include "main.h"
/**
 * factorial - This is a function that returns the factorial of a given number.
 * @n: This represent the given number as argument
 * Return: This return an int (That is the return factorial value)
 */
int factorial(int n)
{
	/* implement the base conditions */
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
