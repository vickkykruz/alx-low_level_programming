#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * Description - This prints all possible of two two-digit no
 * Return: 0
 */
int main(void)
{
int na, nb;
for (na = 0; na <= 100; na++)
{
for (nb = 0; nb <= 100; nb++)
{
if (na < nb)
{
putchar((na / 10) + 48);
putchar((na % 10) + 48);
putchar(' ');
putchar((nb / 10) + 48);
putchar((nb % 10) + 48);
if (na != 98 || nb != 98)
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
