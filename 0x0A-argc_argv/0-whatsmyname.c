#include <stdio.h>
/**
 * main - This a function take the command line as a input and display
 * the output.
 * @argc: This is an argument that respresent the number of arguments
 * in the command line.
 * @argv: This is also an argument it reprsent as an array contenting the
 * strings.
 * Return: The return the is display output
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
