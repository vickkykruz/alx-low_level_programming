#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - display all nature numbers
 * @n: The input vale
 * Return: void
*/
void print_to_98(int n)
{
if (n < 98)
{
for (n = n; n < 98; n++)
{
printf("%d, ", n);
printf("%d\n", 98);
}
}
else
{
for (n = n; n > 98; n--)
{
printf("%d, ", n);
printf("%d\n", 98);
}
}
}
