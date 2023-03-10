#include "main.h"
/**
 * _puts - fuction use to print the string
 * @str: The input value
 * Return: void
*/
void _puts(char *str)
{
int n = 0;
while (n >= 0)
{
if (str[n] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[n]);
n++;
}
}
