#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - starting point
 * Description: Display if number is positive, nagative or zero
 * @n - This the variable that store the number
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else if (n == 0)
{
printf("0 is zero\n");
}
else
{
printf("Error");
}
return (0);
}
