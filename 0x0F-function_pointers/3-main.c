#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check thr code
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: int
*/
int main(int argc, char *argv[])
{
	int arg1, arg2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
			     
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
