#include "main.h"
/**
 * _atoi - This is a function that convert a string to an integer
 * @s: This represent the given string as an argument
 *
 * Return: This return the int value
 */

int _atoi(char *s)
{
	int num = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '_')
			num *= 1;
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= num;
	return (res);
}
