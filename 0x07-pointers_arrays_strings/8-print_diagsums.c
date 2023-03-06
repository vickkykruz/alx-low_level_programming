#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonals
 * @a: The input strings
 * @size: The input size
 * Return: void
*/

void print_diagsums(int *a, int size)
{
int d_size1, d_size2, num, i;
d_size1 = 0;
d_size2 = 0;

for (num = 0; num < size; num++)
{
i = (num * size) + num;
d_size1 += a[i];
}

for (num = 1; num <= size; num++)
{
i = (num * size) - num;
d_size2 += a[i];
}
printf("%d, %d\n", d_size1, d_size2);
}
