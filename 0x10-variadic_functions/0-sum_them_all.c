#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function that sum the element in the array
 * @n: The total number of element in the array
 * Return: The sum (int)
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
