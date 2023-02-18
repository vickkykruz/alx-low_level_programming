#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * Decsrtion - This print all single digits with a ',' and ' '
 * @n - For initialzing the numbers
 * section headers - stdio.h, stdlib.h
 * Return: 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
