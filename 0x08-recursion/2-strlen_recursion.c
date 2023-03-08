#include "main.h"
/**
 * _strlen_recursion - return the length of string
 * @s: The input string
 * Return: int
*/

int _strlen_recursion(char *s)
{
/* Base Case */
if (*s == '\0')
{
return (0);
}
return (1 +  _strlen_recursion(s + 1));
}
