#include "main.h"
/**
 * _puts_recursion - This is a function that prints a string, followed
 * by a new line.
 * @s: This is contants the given string
 * Return: The return is a void (That outpit the string)
 */
void _puts_recursion(char *s)
{
	/* Imeplement the base case */
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
