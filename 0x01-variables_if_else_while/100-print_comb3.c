#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int n1 = '0';
int n2 = '0';
for (n2; n2 <= '9'; n2++)
{
for (n1; n1 <= '9'; n1++)
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
