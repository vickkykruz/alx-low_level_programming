#include "main.h"
/**
 * swap_int - function that swap two integers
 * @a: The input value for a variable
 * @b: The input value for b variable
 * Return: void
*/
void swap_int(int *a, int *b)
{
int num;
num = *a;
*a = *b;
*b = num;
}
