#include <stdio.h>
/**
 * main - This funtion that return the number of argurment passed
 * in the command line
 * @argc: This is argument that represent the number of argument
 * passes the function
 * @argv: This is an argument that also reprsent the array that
 * contain the strings
 * Return: This return the number of arguments passed to the function (int)
 */

int main(int argc, char __attribute__((unused)) **argv)
{
	int num = argc - 1;

	printf("%d\n", num);
	return (0);
}
