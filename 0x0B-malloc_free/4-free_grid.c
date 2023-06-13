#include "main.h"
#include <stdlib.h>
/**
 * free_grid - This is a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: This is the an argument that represent the dimenisional grid
 * @height: This is an argurment that reprsent the given height
 * Description: This function is to free any unsed allocated memory
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
