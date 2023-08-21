#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * _atoi: This is a function that convert a string to an integer
 * @s: This is an argument that contain the given string
 *
 * Return: This function return the output integer
 */
int _atoi(char *s)
{
	int i, sign, len;
	unsigned int num;

	len = strlen(s);
	num = 0;
	sign = 1;

	for (i = 0; i < len; i++)
	{
		if (num > 0)
		{
			if (isdigit(s[i]) == 0)
				break;
		}
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + s[i] - '0';
		}
	}

	return (num * sign);
}
