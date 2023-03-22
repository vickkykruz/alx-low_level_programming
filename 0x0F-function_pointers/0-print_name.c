#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: The person name
 * @f: Respresent a call back function
 * Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	/* Here we are going to the function with an agrument name */
	if (!name || !f)
		return;
	f(name);

}
