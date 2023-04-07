#include "main.h"
int _strlen(const char *c)
{
	int i;

	while (c[i] != '\0')
		i++;
	return (i);
}
/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: The give filename
 * @text_content: The content in the file
 *
 * Return: 1 or -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len_w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY |  O_APPEND);
	if (fd < 0)
		return (-1);
	/* CHECK FOR THE text_content **/
	if (text_content)
	{
		len_w = write(fd, text_content, _strlen(text_content));
		if (len_w < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
