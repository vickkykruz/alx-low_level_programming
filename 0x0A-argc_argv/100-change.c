#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is a function that prints the minimum number of coins to make
 * change for an amount of money
 * @argc: This is an argument that represent the number of argument passed from
 * the command line
 * @argv: This is an argument that represent that array of an argument that
 * contains string
 *
 * Return: This return an interger
 */
int main(int argc, char *argv[])
{
	int count, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count = atoi(argv[1]);
	res = 0;

	if (count < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && count >= 0; i++)
	{
		while (count >= coins[i])
		{
			res++;
			count -= coins[i];
		}
	}

	printf("%d\n", res);
	return (0);
}
