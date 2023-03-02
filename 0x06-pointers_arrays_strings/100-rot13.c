#include "main.h"
/**
 * rot13 - encodes string using rot13
 * @c: The input string
 * Return: c
 */
char *rot13(char *c)
{
int num, i;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

num = 0;
while (*(c + num) != '\0')
{
for (i = 0; i < 52; i++)
{
if (*(c + num) == alphabet[i])
{
*(c + num) = rot13[i];
break;
}
}
num++;
}
return (c);
}
