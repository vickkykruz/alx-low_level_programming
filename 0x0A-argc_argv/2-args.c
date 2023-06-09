#include <stdio.h>
/**
 * main - This is a function that prints all arguments it receives.
 * @argc: This is an argument that represent the number of argument in the
 * command line
 * @argv: This is also an argument that represent the arrary containting
 * the strings
 * Return: This return each string of arguments passed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
