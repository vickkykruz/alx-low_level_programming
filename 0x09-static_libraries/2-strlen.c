#include "main.h"
/**
 * _strlen - function that return the length of a string
 * @s: The input value
 * Return: The length of the string in int
*/
int _strlen(char *s)
{
int num;
for (num = 0; *s != '\0'; s++)
{
num++;
}
return (num);
}
