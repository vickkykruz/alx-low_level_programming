#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: The number of argument passed
 * @argv: The array of argument of a string
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int num, total, chance, n;

int coin[] = {1, 2, 5, 10, 25};

num = total = chance = n = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

total = atoi(argv[1]);
if (total <= 0)
{
printf("0\n");
return (0);
}

while (coin[num] != '\0')
{
if (total >= coin[num])
{
n = (total / coin[num]);
chance += n;
total -= coin[num] * n;
}
num++;
}
printf("%d\n", chance);
return (0);
}
