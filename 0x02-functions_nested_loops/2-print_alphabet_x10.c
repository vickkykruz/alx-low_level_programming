#include "main.h"
/**
 * print_alphabet_x10 - output letters in 10 new lines
 * Return: void
*/
void print_alphabet_x10(void)
{
char letter;
int num = 1;
while (num <= 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
num++;
}
}
