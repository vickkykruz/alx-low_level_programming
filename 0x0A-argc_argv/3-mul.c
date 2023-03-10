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
int counter, num, mult = 1;
if (argc > 1)
{
for (counter = 1; counter < argc; counter++)
{
num = atoi(argv[counter]);
mult *= num;
}
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
