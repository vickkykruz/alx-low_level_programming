#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * description - display letters in lower case
 * @letters - this variables contain the list of letters
 * Return: 0
 */
int main(void)
{
int letters;
letters = 'a';
while (letters <= 'z')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
