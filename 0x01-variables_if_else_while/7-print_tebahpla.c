#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * description - this function diplay the letters in a revered manner
 * @letter - is the variable used
 * Return: 0
 */
int main(void)
{
int letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
