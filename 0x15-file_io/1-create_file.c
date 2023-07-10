#include "main.h"
/**
 * create_file - This is a function that creates a file.
 * @filename: This is an argument that represent the name of the file
 * @text_content: This is an argument that represent the text stored in the
 * file
 *
 * Return: This function return (1) as succes otherwise (-1) as failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, i = 0, lenWR = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	/** Interst the text_content to the file **/
	for (i = 0; text_content[i]; i++)
		;
	lenWR = write(fd, text_content, i);
	if (lenWR == -1)
		return (-1);

	close(fd);
	return (1);
}

