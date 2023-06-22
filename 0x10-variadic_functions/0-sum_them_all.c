#include "variadic_functions.h"
/**
 * sum_them_all - This is a function that returns the sum of all its parameters
 * @n: This is an argument that represent the last parmeter of the prototype
 *
 * Return: This function return the sum of the args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	/** Run a loop to iterate each args passed **/
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
