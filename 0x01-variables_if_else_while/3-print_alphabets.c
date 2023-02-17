#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * description - this function is to print out the lowercase and uppercase
 * @lowercase - To store and diplay the lowercase
 * @uppercase - To store and diplay the uppercase letter
 * Return: 0
 */
int main(void)
{
int lowercase, uppercase;
lowercase = 'a';
uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
