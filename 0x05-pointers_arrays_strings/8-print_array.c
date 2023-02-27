#include "main.h"
#include <stdio.h>
/**
 * print array - print the elements of an array
 * @a: The input value for a
 * @n: The input value for n
 * Return: void
*/
void print_array(int *a, int n)
{
int num;
for (num = 0; num < n; num++)
{
printf("%d", *(a + 1));
if (num != (n - 1))
printf(",");
}
printf("\n");
}
