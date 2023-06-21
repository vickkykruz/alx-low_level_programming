#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the entity function that prints the opcodes of its own main
 * function.
 * @argc: This is an argument tha reprsent the number of argument passed
 * @argv: This is an argument that reprsent the array of argument sring
 *
 * Return: This function return an opcodes
 */
int main(int argc, char *argv[])
{
	int i, nbty;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbty = atoi(argv[1]);

	if (nbty < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbty; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != nbty - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
