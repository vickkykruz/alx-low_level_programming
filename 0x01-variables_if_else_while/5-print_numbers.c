#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * description - It display every single digits
 * @n - it store the vaule and diplay it
 * Return: 0
 */
int main(void)
{
int n = 0;
while (n < 10)
{
printf("%d", n);
n++;
}
putchar('\n');
return (0);
}
