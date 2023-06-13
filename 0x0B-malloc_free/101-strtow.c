#include "main.h"
#include <stdlib.h>
/**
 * _count_words - This is a funxtion that counts the number of words in a string
 * @str: This is an argument that repreaent the given string
 * Return: This return the number of words counted
 */
int _count_words(char *str)
{
	int x, y = 0, f = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			y++;
		}
	}
	return (y);
}
/**
 * strtow - This a function that splits a string into words.
 * @str: This is an argument that reprsent the given string
 * Return: This return a char pointer
 */
char **strtow(char *str)
{
	char *tmp, **ptr;
	int i, words, x = 0, y = 0, len = 0, start, end;

	while (*(str + len))
		len++;

	words = _count_words(str);
	if (words == 0)
		return (NULL);

	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (y)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (y + 1));
				if(tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp = str[start++];

				*tmp = '\0';
				ptr[x] = tmp - y;
				x++;

				y = 0;
			}
		}
		else if (y++ == 0)
			start = i;
	}
	ptr[x] = NULL;
	return (ptr);
}
