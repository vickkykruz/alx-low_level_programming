#include "main.h"
/**
 * _pow_recursion - This is a function that returns the value of x raised
 * to the power of y.
 * @x: This indeicate the rate to power of y
 * @y: This respresent the exacit value given
 * Return: This return the value of an int
 */
int _pow_recursion(int x, int y)
{
	/* Base case condition */
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
