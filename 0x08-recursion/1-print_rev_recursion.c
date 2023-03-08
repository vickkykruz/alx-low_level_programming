
#include "main.h"
/**
 * _print_rev_recursion - print a reverse string
 * @s: The input string
 * Return: void
*/

void _print_rev_recursion(char *s)
{
/* Declarate a variable*/
/*Base Case */
if (*s == '\0')
{
/* _putchar('\n'); */
return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
/*  _print_rev_recursion(s[len] - 1); */
}
