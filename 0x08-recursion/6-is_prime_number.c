#include "main.h"

/**
 * evaulate_cond - the recursion condition loop
 * @num: The input number checked
 * @num2: number to check
 * Return: int value
*/

int evaulate_cond(int num, int num2)
{
if (num2 == num - 1)
{
return (1);
}
else if (num % num2 == 0)
{
return (0);
}

if (num % num2 != 0)
{
return (evaulate_cond(num, num2 + 1));
}
return (0);
}

/**
 * is_prime_number - check if a number is prime or not
 * @n: the input number
 * Return: the evaulate_cond
*/

int is_prime_number(int n)
{
int num2;
num2 = 2;

/* Valodate the experssion */
if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (evaulate_cond(n, num2));
}
