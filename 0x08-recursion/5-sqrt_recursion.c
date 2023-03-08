#include "main.h"
/**
 * assits - find the square root of two number
 * @a: The first input
 * @b: The second input
 * Return: the int square
*/

int assits(int a, int b)
{
if (b * b > a)
{
return (-1);
}
else if (b * b == a)
{
return (b);
}
else
{
return (assits(a, b + 1));
}
return (1);
}

/**
 * _sqrt_recursion - to check the natural square root
 * of a number
 * @n: the input number
 * Return: int
*/

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (assits(n, 1));
}
