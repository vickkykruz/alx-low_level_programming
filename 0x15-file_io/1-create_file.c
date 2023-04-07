#include "main.h"
/**
 * _strlen - A function that get the total length of a string
 * @c: The given string
 *
 * Return: total length (i)
*/
int _strlen(const char *c)
{
	int i = 0;

	while (c[i] != '\0')
		i++;

	return (i);
}
/**
 * create_file - A function that creates a file.
 * @filename: The name of the file to be created
 * @text_content: The text content of the file
 *
 * Return: int
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len_w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/** Now we will create the file **/
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	len_w = write(fd, text_content, _strlen(text_content));
	if (len_w < 0)
		return (-1);

	close(fd);

	return (1);
}
