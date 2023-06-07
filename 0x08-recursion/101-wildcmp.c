#include "main.h"
/**
 * wildcmp - This is a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0
 * @s1: This represent the first line of string
 * @s2: This respresent the second line of string
 *
 * Return: This return the condition (true 1 or false 0) if the string are
 * identical
 */
int wildcmp(char *s1, char *s2)
{
	/** Base Case Condition */
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
