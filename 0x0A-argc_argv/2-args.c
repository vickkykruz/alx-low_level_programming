#include <stdio.h>
/**
 * main - print all arguments it receives
 * @argc: The number of arguments passed
 * @argv: The array of strings arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{

int counter;

for (counter = 0; counter < argc; counter++)
{
printf("%s\n", argv[counter]);
}
return (0);
}
