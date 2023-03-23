#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: is the string to be printed between the string
 * @n: the number of the string passed to the function
 * Return: void
 */

void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
