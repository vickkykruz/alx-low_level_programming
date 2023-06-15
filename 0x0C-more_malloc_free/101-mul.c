#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - This is a function that returs the allocated memory
 * @nmemb: This is an argument that represent the number of a given elememnt
 * @size: This is an argument that represent the size of the given memory
 * Return: This function will return the pointer of a newly array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = '0';

	return (ptr);
}
/**
 * _dynamic_array - This is a function that return the mulplication of a two
 * array
 * @s1: This is an argument that represent the given first string
 * @Alen: This is an argument that represent the lenght of the first string
 * @s2: This is an argument that represent the given second string
 * @s3: This is an argument that represent the given third string
 * @Blen: This is an argument that represent the lenght of the second string
 * Return: This function return a newly allocated pointer
 */
void *_dynamic_array(char *s1, int Alen, char s2, char *s3, int Blen)
{
	int i, j, num = 0;

	j = Blen;

	for (i = Alen - 1; i >= 0; i--)
	{
		num += (s1[i] - '0') * (s2 - '0') + (s3[j] - '0');
		s3[j] = (num % 10) + '0';
		num /= 10;
		j--;
	}

	while (num != 0)
	{
		num += s3[j] - '0';
		s3[j] = (num % 10) + '0';
		num /= 10;
		j--;
	}
	return (s3);
}
/**
 * display_output - This is a function that return all the element of the array
 * @n: This is an argument that represnt the number of the elements
 * @arr: This is an arguments that represnt the elemenys of the array
 * Return: This function returns a void
 */
void display_output(char *arr, int n)
{
	int i = 0;

	while (arr[i] == '0' && (i + 1) < n)
		i++;

	for (; i < n; i++)
		_putchar(arr[i]);
	_putchar('\n');
}
/**
 * is_digit - This is a function that checks if the string contain an int
 * @str: This is an argument that represent the given string
 * Return: This returm 0 if is non-digit otherwise it return 1
 */
int is_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (1);
		i++;
	}
	return (0);
}
/**
 * main - This is a function that  multiplies two positive numbers.
 * @argc: This is an argument that represent the number of agruments passed
 * throught the command line
 * @argv: This is an argument thay reprsent the array of steings enter from the
 * command line
 * Return: this function return the result
 */
int main(int argc, char *argv[])
{
	int i, Alen, Blen, lenght, j;
	char Err[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *ptr;

	if (argc != 3 || is_digit(argv[1]) == 1 || is_digit(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
			_putchar(Err[i]);

		exit(98);
	}

	for (Alen = 0; argv[1][Alen]; Alen++)
	;
	for (Blen = 0; argv[2][Blen]; Blen++)
	;
	lenght = Alen + Blen;
	ptr = _calloc(lenght, sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}

	for (i = Blen - 1, j = 0; i >= 0; i--)
	{
		ptr = _dynamic_array(argv[1], Alen, argv[2][i], ptr, (lenght - 1 - j));
		j++;
	}
	display_output(ptr, lenght);
	free(ptr);
	return (0);
}
