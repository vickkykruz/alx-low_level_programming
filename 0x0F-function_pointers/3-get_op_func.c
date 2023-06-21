#include "3-calc.h"
/**
 * get_op_func - This is a function that select the function to run by the
 * given argument
 * @s: This is an argument that passed to the programm
 * Return: This function return an int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
		i++;
	}
	return (NULL);
}

