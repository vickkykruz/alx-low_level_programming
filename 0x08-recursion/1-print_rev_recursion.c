#include "main.h"
/**
 * _print_rev_recursion - print a reverse string
 * @s: The input string
 * Return: void
*/

void _print_rev_recursion(char *s)
{
  /* Declarate a variable*/
  int len = 0;
  /*Base Case */
  if (*s == '\0')
    {
      _putchar('\n');
      return;
    }

  while (s[len] != '\0')
    {
      len++;
    }

  _putchar(len);
  /*  _print_rev_recursion(s[len] - 1); */
}
