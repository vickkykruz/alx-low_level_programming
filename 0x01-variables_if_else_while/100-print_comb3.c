#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * Description - This print numbers in a two single digit from 01 - 89
 * @n1 - This is a vraiable that represent ones
 * @n2 - This is a variable that represent tens
 * section headers - stdio.h, stlib.h
 * Return: 0
 */
int main(void)
{
int n1 = '0';
int n2 = '0';
for (n2 = '0'; n2 <= '9'; n2++)
{
for (n1 = '0'; n1 <= '9'; n1++)
{
if (!((n1 == n2) || (n2 > n1)))
{
putchar(n2);
putchar(n1);
if (!((n1 == '9') && (n2 == '8')))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
