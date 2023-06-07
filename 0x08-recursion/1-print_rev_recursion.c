#include "main.h"
/**
 * _print_rev_recursion - This is a function that prints a string in
 * reverse matter.
 * @s: The given input string as an argument
 * Return: void (That  is the output of the sting)
 */

void _print_rev_recursion(char *s)
{
	/* Base statement */
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
