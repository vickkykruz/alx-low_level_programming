#include "main.h"
/**
 * puts_half - print half of a string
 * @str: The input value
 * Return: void
*/
void puts_half(char *str)
{
int num, num1, num2;
num = 0;
while (str[num] != '\0')
{
num++;
}

if (num % 2 == 0)
{
for (num1 = num / 2; str[num1] != '\0'; num1++)
{
_putchar(str[num1]);
}
}
else if (num % 2)
{
for (num2 = (num - 1) / 2; num2 < num - 1; num2++)
{
_putchar(str[num2 + 1]);
}
}
_putchar('\n');
}
