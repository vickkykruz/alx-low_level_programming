#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - This is a funxtion that concatenates all the arguments of your
 * program.
 * @ac: This is an argument that represent the argument count
 * @av: This is an argument that represent the array argument string
 * Return: This return a concatnated string argument
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, x, y = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			len++;
	}

	len += ac;
	len = len + 1;

	ptr = (char *) malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			ptr[y] = av[i][x];
			y++;
		}
		if (ptr[y] == '\0')
			ptr[y++] = '\n';
	}
	return (ptr);
}

