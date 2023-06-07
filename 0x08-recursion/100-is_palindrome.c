#include "main.h"
/**
 * _evaluate_palindrome - This is a function that check the given string
 * @s: This respresent the given string as an argument
 * @len: This reprsent the total lenght of the given string
 * @x: This represent the itreration of the given string
 *
 * Return: This return an int value that state the condition
 * (true 1 or false 0)
 */
int _evaluate_palindrome(char *str, int x, int length)
{
	if (*(str + x) != *(str + length - 1))
		return (0);
	if (x >= length)
		return (1);

	return (_evaluate_palindrome(str, x + 1, length - 1));
}
/**
 * _recursion_strlen - This is a function that return the lenght of the
 * given str.
 * @s: This represent the given string as an argument
 * Return: This return an int value
 */
int _recursion_strlen(char *s)
{
	if (*s != '\0')
		return (1 + _recursion_strlen(s + 1));
	return (0);
}
/**
 * is_palindrome - This is a function that returns 1 if a string is a
 * palindrome and 0 if not.
 * @s: This is the given string as an argument
 * Return: This return an int as a value
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (_evaluate_palindrome(s, 0, _recursion_strlen(s)));
}
