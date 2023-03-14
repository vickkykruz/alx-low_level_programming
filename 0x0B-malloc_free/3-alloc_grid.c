#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer of two dimenstiona
 * arrays
 * @width: The input width of the array
 * @height: The input height of the array
 * Return: freed spaces
*/

int **alloc_grid(int width, int height)
{
/* Variables Declaration */
int **ptr, i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}

ptr = malloc(height * sizeof(int *));
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
ptr[i] = (int *) malloc(width * sizeof(int));
if (ptr[i] == NULL)
{
for (i = i - 1; i >= 0; i--)
{
free(ptr[i]);
}
free(ptr);
return (NULL);
}
}
for (i = 0; j < width; j++)
{
ptr[i][j] = 0;
}
return (ptr);
}
