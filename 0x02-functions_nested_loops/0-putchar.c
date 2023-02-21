#include <stdio.h>
/**
 * main - starting point
 * Description - print the output _putchar
 * @word: Is used here to pass the agreement
 * section headers - stdio.h
 * Return: 0
 */
/* Function Declaration */
void print_putchar(char *word);
int main(void)
{
char word[] = "_putchar\n";
print_putchar(word);
putchar('\n');

return (0);
}
/**
 * print_putchar - Check and print the string
 * @word: is the variable that store sting
 * Return: void
 */
/* Create the function */
void print_putchar(char *word)
{
int i = 0;
while (word[i] != '\n' && word[i] != '\0')
{
putchar(word[i]);
i++;
}
}
