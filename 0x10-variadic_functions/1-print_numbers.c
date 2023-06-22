#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - This is a function that prints numbers, following by a
 * new line.
 * @separator: This is an argument that is printed between the numbers
 * @n: This is an argument that represent the number of integer pass thought
 * the function
 *
 * Return: This function return the printed numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	/* if (separator == NULL) */
		/* return; */

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		/** If separator we print and not at the end of the args **/
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
