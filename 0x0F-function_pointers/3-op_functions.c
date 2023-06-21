#include "3-calc.h"
/**
 * op_add - This is a function that return addion of two value a & b
 * @a: This is an argument that reprsent the given first value
 * @b: This is an argument that represent the given secound value
 *
 * Return: This function return result as an int value
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This is a function that return substraction of two values a & b
 * @a: This is an argument that represent the given first value
 * @b: This is an argument that represent the given second value
 *
 * Return: This function return the results as an int value
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This is a function that return the multiplication of two value
 * @a: This is an argument that represnt the given first value
 * @b: This is an argument that reprsent the given second value
 *
 * Return: This function return the result as an int value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This is a function that return the division of two value a & b
 * @a: This is an argument that return the given first value
 * @b: This is an argument that return the given second value
 *
 * Return: This function return the result as an int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This is a function that return the module of two value a & b
 * @a: This is an argument that reprsent the given first value
 * @b: This is an argument that reprsent the given second value
 *
 * Return: This function return the result as int value
 */
int op_mod(int a, int b)
{
	return (a % b);
}
