#include "3-calc.h"
#include <stdio.h>
/**
 * *get_op_func -  function that selects the correct function to be perform
 * *Description: This function returns a pointer to the function tha
 * t corresponds to the operator given as a parameter.
 * @s: The inpit characterics
*/
int (*get_op_func(char *s))(int, int)
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
	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
