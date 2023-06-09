#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: S1 string input
 * @s2: s2 string input
 * Return: value
*/
int _strcmp(char *s1, char *s2)
{
int num, value;
num = 0;
while (s1[num] == s2[num] && s1[num] != '\0')
{
num++;
}

value = s1[num] - s2[num];
return (value);
}
