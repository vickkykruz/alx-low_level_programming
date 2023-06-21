#include "3-calc.h"
/**
 * main - The is enitiy function of this program
 * @argc: This is an argument that represent the number of arguments passed
 * @argv: This is an argument that represnt the array of string arguments
 * passed by the command line
 * Description: What this function does is to accept the argumens passed by
 * the command line
 * Return: This function return the result of the opration
 */
int main(int argc, char *argv[])
{
	int ag1, ag3, res;
	int (*op)(int, int);

	/** If the argument is more/less than 4 **/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/** Conver the string to an interger **/
	ag1 = atoi(argv[1]);
	ag3 = atoi(argv[3]);

	/** Passing the opeartion **/
	op = get_op_func(argv[2]);

	/** Condition: Not among the listed operation **/
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && ag3 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = op(ag1, ag3);
	printf("%d\n", res);

	return (EXIT_SUCCESS);
}

