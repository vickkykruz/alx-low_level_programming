#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - This is a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: This is an argument that represent the given value of the width
 * @height: This is an argument that represent the given value of the height
 * Return: This return a pointer to a 2 dimensional array of integer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		ptr[h] = (int *) malloc(sizeof(int) * width);
		if (ptr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(ptr[h]);
			free(ptr);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			ptr[h][w] = 0;
	}
	return (ptr);
}
