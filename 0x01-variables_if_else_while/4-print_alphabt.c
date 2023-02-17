#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * description - function display the letters but skip letter e and letter q
 * @letter - the variable that store and diplay the letters
 * Return: 0
 */
int main(void)
{
int letters;
letters = 'a';
while (letters <= 'z')
{
if ((letters != 'e') && (letters != 'q'))
{
putchar(letters);
}
letters++;
}
putchar('\n');
return (0);
}
