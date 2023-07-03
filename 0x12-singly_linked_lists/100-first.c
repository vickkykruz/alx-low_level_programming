#include <stdio.h>
/**
 * prefun - This is function that print the words before the main function
 * execute
 *
 * Return: This function return a void(nothing)
 */
void __attribute__ ((constructor)) prefun()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
