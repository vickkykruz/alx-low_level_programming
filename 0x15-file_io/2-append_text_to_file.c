#include "main.h"
/**
 * append_text_to_file - This is a function that appends text at the end of
 * a file.
 * @filename: This is an argument that represent the name of the file given
 * @text_content: This is an argument that represent the text to be stored
 *
 * Return: This function return (1) as success otherwise (-1) as failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, lwr;

	if (filename == NULL || text_content == NULL)
		return  (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;
	lwr = write(fd, text_content, i);
	if (lwr == -1)
		return (-1);

	close(fd);
	return (1);
}
