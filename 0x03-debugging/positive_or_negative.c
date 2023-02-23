#include <stdio.h>
/**
 * positive_or_negative - check the input value
 * @i: The input value
 * Return: void
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("Errir");
}
}
