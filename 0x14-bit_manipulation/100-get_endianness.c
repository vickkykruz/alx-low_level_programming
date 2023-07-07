#include "main.h"
/**
 * get_endianness - This is a function that checks the endianness.
 *
 * Return: This function return 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 0;
	char *ch = (char *) &num;

	if (!ch)
		return (0);
	else
		return (1);
}
