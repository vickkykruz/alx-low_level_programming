#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - This is a function that prints a name
 * @name: This is an argunent that passes the given name
 * @f: This is an agrgument that reprsent a pointer to function
 *
 * Return: This function returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	/** Output the call-back of the function the agrument name **/
	f(name);
}
