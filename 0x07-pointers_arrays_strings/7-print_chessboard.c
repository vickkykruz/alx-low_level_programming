#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: The input string
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
int rows;
int columns;

for (rows = 0; rows < 8; rows++)
{
for (columns = 0; columns < 8; columns++)
{
_putchar(a[rows][columns]);
_putchar('\n');
}
}
}
