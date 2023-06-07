#include "main.h"
/**
 * _get_prime_num - Thisnis a function that recursive each number to identify
 * the number
 * @n: This resprent the given number as an argument
 * @i: This represent the given itreation to idetify the each number
 * Return: This return an int value
 */
int _get_prime_num(int n, int i)
{
	if (i == n - 1)
		return (1);
	else if (n % i == 0)
		return (0);

	if (n % i != 0)
		return (_get_prime_num(n, i + 1));

	return (0);
}

/**
 * is_prime_number - This is a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: This represent the given number as an argument
 * Return: This return an int of 1 or 0 (true or false)
 */
int is_prime_number(int n)
{
	/* Using 2 as the base case to identify a prime number */
	int i = 2;
	/** Base case condition **/
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (_get_prime_num(n, i));
}
