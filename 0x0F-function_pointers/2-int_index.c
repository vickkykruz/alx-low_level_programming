#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: The input array for search
 * @size: The size of an array
 * @cmp: The function pointer of another function
 * Return: The condition 1 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	/* Variable Declaration */
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
