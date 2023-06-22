#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - This is a function that prints strings, followed by a
 * new line.
 * @separator: This is an argument that represent the string stored to be
 * prinyed between the strings
 * @n: This is an argument thag reprsent the number of string passed to the
 * function.
 *
 * Return: This function return the printed string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
