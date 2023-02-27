#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: The input value
 * Return: void
*/
void rev_string(char *s)
{
int num, num1, num2;
char string;
num1 = 0;
num2 = 0;
while (s[num1] != '\0')
{
num1++;
}
num2 = num1 - 1;
for (num = 0; num < num1 / 2; num++)
{
string = s[num];
s[num] = s[num2];
s[num2--] = string;
}
}
