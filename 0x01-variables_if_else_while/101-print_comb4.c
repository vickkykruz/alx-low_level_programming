#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * Description - Prints all possible differnt combination of three No
 * @units - This variable represent the units digit
 * @tens - This variable represent the tens digits
 * @hundreds - This variable represent hundred digits
 * Return: 0
 */
int main(void)
{
int units = '0';
int tens = '0';
int hundreds = '0';
for (hundreds = '0'; hundreds <= '9'; hundreds++)
{
for (tens = '0'; tens <= '9'; tens++)
{
for (units = '0'; units <= '9'; units++)
{
if (!(units == tens || tens == hundreds || tens > units || hundreds > tens))
{
putchar(hundreds);
putchar(tens);
putchar(units);
/* To implement , and space */
if (!(units == '9' && hundreds == '7' && tens == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
