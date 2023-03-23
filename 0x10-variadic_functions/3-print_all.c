#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, k = 0;
	const char f_arg[] = "cfis";
	va_list ap;
	char *string;

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		/* Loop The Array Format */
		while (f_arg[j])
		{
			/* A Condition To Validate if  format is equa; to the arry format */
			if (format[i] == f_arg[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		/* A  Condition To Validate And Print out The Outut
		 * Using Switch Case
		*/
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), k = 1;
				break;
			case 's':
				string = va_arg(ap, char *), k = 1;
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
