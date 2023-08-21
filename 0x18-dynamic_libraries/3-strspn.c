#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: The input string
 * @accept: The input target
 * Return: The number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = strspn(s, accept);

	return (res);
}
