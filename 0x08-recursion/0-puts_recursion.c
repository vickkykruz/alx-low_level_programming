#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: The input string
 * Return: void
*/
void _puts_recursion(char *s)
{
/* Base Case*/
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
