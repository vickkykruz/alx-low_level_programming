#include "main.h"
/**
 * get_endianness - A function that checks the endianness
 *
 * Return: void
*/
int get_endianness(void)
{
	int i = 1;

	if (*((char *)&i) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
