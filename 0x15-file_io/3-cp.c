#include "main.h"
/**
 * _cp_file - A function that copy file from one file to another
 * @file_from: The given source file
 * @file_to: The given destination file
 *
 * Return: void
*/

void _cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, rdlen, wrlen;
	char *c;
	if (file_to)
	{
		fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
		if (fd_to < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (!file_from)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_from = open(file_from, O_RDONLY);
	c = (char *) malloc(sizeof(char) * BUFFER_SIZE);
	rdlen = read(fd_from, c, BUFFER_SIZE);
	if (rdlen < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	wrlen = write(fd_to, c, BUFFER_SIZE);
	if (wrlen < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	free(c);
	close(fd_from);
	close(fd_to);
	if (!close(fd_from))
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (!close(fd_to))
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main -  program that copies the content of a file to another file.
 * @ac: The argument counter
 * @av: The argments vector
 *
 * Return: 0
*/

int main(int ac, char **av)
{
	/** To Check if the argument counter is more/less than 3 **/
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}

	/** Call The function to do the operations **/
	_cp_file(av[1], av[2]);
	return (0);
}
