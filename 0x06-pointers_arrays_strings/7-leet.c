#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: The input value
 * Return: c
*/
char *leet(char *c)
{
int num, i;

int lower_case[] = {97, 101, 111, 116, 108};
int upperCase[] = {65, 69, 79, 84, 76};

int numbers[] = {52, 51, 48, 55, 49};

num = 0;
while (*(c + num) != '\0')
{
for (i = 0; i < 5; i++)
{
if (*(c + num) == lower_case[i] || *(c + num) == upperCase[1])
{
*(c + num) = numbers[i];
break;
}
}
num++;
}
return (c);
}
