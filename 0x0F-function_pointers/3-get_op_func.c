#include "3-calc.h"
#include <stdio.h>
/**
 * *get_op_func -  function that selects the correct function to be perform
 * *Description: This function returns a pointer to the function tha
 * t corresponds to the operator given as a parameter.
 * @s: The inpit characterics
*/
int (*get_op_func(char * s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div}, 
		{"%", op_mod}, 
		{NULL, NULL}
	};
	int i;

	i = 0; 
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
