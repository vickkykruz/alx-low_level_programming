#include "3-calc.h"
/**
 * op_add - the function that add two numbers
 * @a: The first number
 * @b: The second number
 * Return: The result of aand b (int)
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that return the differnce of a and b
 * @a: The input first number
 * @b: The input of the second number
 * Return: The difence of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that return the product of and b
 * @a: The input value of the first parameter
 * @b: The input of the second paramenter
 * Return: thr product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that return the result of the division
 * a and b
 * @a: The input element of a.
 * @b: The inpit element of b
 * Return: The Result of the division a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: The input value of a
 * @b: The inpit value of b
 * Return: The reminder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
