#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * _validate_num - This is a function that check if the string passed
 * is a digit
 * @s: This is an argument thay represent the given string
 *
 * Return: This return an integer
 */
int _validate_num(char *s)
{
	unsigned int num = 0;
	unsigned int len = strlen(s);

	while (num < len)
	{
		if (!isdigit(s[num]))
			return (0);
		num++;
	}
	return (1);
}

/**
 * main - This is a function that adds positive numbers.
 * @argc: This is an argument that represent the number of arguuments
 * passes through the command line
 * @argv: This is also an argument that represent the array of arguments
 * that contains string passes through the command line.
 *
 * Return: This return an integer
 */
int main(int argc, char *argv[])
{
	int num = 1, sum = 0, str_len = 0;

	while (num < argc)
	{
		if (_validate_num(argv[num]))
		{
			str_len = atoi(argv[num]);
			sum += str_len;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}

