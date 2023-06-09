#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: The input string
 * @accept: The input target
 * Return: The number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, corr;
	i = 0;
	corr = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				corr++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (corr);
			}
		}
		i++;
	}
	return (corr);
}
