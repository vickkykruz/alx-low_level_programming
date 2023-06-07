#include "main.h"
int get_sqrt_recursion(int num, int i);
/**
 * get_sqrt_recursion - This function operate the natural squrt root of a num
 * @num: The reprsent the passing number as a agrument
 * @i: This represent the interation.
 * Return: This return the value of an int
 */
int get_sqrt_recursion(int num, int i)
{
	/* Base case Conditions */
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (get_sqrt_recursion(num, i + 1));
}

/**
 * _sqrt_recursion - This is a function that returns the natural
 * square root of a number.
 * @n: This represent the given number as an argument
 * Return: Tis return the square value as an int
 */
int _sqrt_recursion(int n)
{
	/* Given instruction Condition */
	if (n < 0)
		return (-1);
	return (get_sqrt_recursion(n, 0));
}

/* int get_sqrt_recursion(int num, int i) */
/* { */
	/* Base case condition */
	/* if (i * i < num) */
		/* return (-1); */
	/* if (i * i == num) */
		/* return (i); */
	/* return (get_sqrt_recursion(nu, i + 1)); */
/* } */
