#include "main.h"
/**
 *puts2 - prints the multiple of 2
 * @str: The input value
 * Return: void
*/
void puts2(char *str)
{
int num = 0;
while (str[num] != '\0')
{
if (num % 2 == 0)
{
_putchar(str[num]);
}
num++;
}
_putchar('\n');
}
