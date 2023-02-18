#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * description - This print in base 16
 * @n - using in initializing the numbers for the function
 * @letter - using in intializing the letter for this function
 * section headers - stdio.h, stdlib.h
 * Return: 0
 */
int main(void)
{
/* Variable Declearation */
int n;
char letter = 'a';
/* Intializing For Loop in the process*/
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
/* Intializing while loop */
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
