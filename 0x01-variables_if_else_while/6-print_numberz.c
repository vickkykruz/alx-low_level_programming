#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * description - print out all single dits number
 * @n - variable used
 * Return: 0
 */
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
