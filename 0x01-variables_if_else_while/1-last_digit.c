#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - staring point
 * description - This diplay if a number is positive, negative or zero
 * @n - This store a rand number
 * @last_digit - This store the last digit of n
 * section headers - stdio.h, stdlib.h and time.h
 * Return: 0
 */
int main(void)
{
/* Variables Declaration */
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Your code goes in there */
/* To get the last digit number */
last_digit = n % 10;
/* Condition Stattement */
if (last_digit > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
}
else if ((last_digit < 6) && (last_digit < 0))
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %i is %i and is 0\n", n, last_digit);
}
else
{
printf("Error");
}
return (0);
}
