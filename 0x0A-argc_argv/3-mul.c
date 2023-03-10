#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiple two numbers
 * @argc: the number of arguments passed
 * @argv: the array of the arguments passed
 * Return: 0
*/
int main(int argc, char *argv[])
{
int a, b, mult;

if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
mult = a *b;

printf("%d\n", mult);

return (0);
}
