#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that add positive numbers.
 * @argc: The number of argument passed
 * @argv: The array of argument strings
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int i, num, sum = 0;

for (i = 1; i < argc; i++)
{
for (num = 0; argv[i][num] != '\0'; num++)
{
if (!isdigit(argv[i][num]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
