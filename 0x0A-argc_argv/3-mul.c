#include <stdio.h>
/**
 * _strlen - This is a function that get the total length of a string
 * @s: This is an argument that represent the string
 *
 * Return: This return the total lenght of the string in integer
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _atoi - This is a custom function that convert string to interger
 * @s: This is an agrument that reprsent the given string
 *
 * Return: This return an intger
 */
int _atoi(char *s)
{
	int i = 0, x = 0, y = 0, z = 0, digit = 0;
	int len;

	len = _strlen(s);
	while (i < len && z == 0)
	{
		if (s[i] == '-')
			x++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (x % 2)
				digit = -digit;
			y = y * 10 + digit;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

			z = 0;
		}
		i++;
	}
	if (z == 0)
		return (0);
	return (y);
}

/**
 * main - This is a function that multiple two numbers passed through the
 * command line
 * @argc: This is an argument that represent the number of arguments passed
 * through the command line
 * @argv: This is also an argument that represent the array of arguments
 * containting the strings
 *
 * Return: This function returns an integer
 */
int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);
	return (0);
}
