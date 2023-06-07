#include "main.h"
/**
 * _strlen_recursion - This a funxtion that print the total lenghr of
 * a string recursively
 * @s: This is the given string as an agrument
 * Return: It returns an int value
 */
int _strlen_recursion(char *s)
{
	int num = 0;
	/* Base Case Condition */
	if (*s)
	{
		/* This will be adding each time the condition is true */
		num++;
		num += _strlen_recursion(s + 1);
	}

	return (num);
}

