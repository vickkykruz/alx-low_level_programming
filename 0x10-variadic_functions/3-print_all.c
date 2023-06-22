#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_all - This is a function that prints anything
 * @format: This is an argument that list the type of arguments passed
 * by a function
 *
 * Return: This function return the printed value
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, k = 0;
	va_list args;
	const char f[] = "cifs";
	char *ptr;

	va_start(args, format);
	while (format && format[i]) /* Loop thought */
	{
		j = 0;
		while (f[j])
		{
			if (format[i] == f[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), k = 1;
				break;
			case 's':
				ptr = va_arg(args, char *), k = 1;
				if (ptr == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
		} i++;
	}
	printf("\n"), va_end(args);
}
