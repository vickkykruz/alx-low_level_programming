#include "main.h"
/**
 * reverse_array - used to reverse the content of an array
 * @a: The input array
 * @n: As the number
 * Return: void
*/
void reverse_array(int *a, int n)
{
int x, num;
n = n - 1;
num = 0;
while (num <= n)
{
x = a[num];
a[num++] = a[n];
a[n--] = x;
}
}
