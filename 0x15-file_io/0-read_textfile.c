#include "main.h"
/**
 * read_textfile - This is a function that that reads a text file and prints
 * it to the POSIX standard output
 * @filename: This is an argument that represent the given firename
 * @letters: This is an argument that represent the given number of letters
 *
 * Return: This function return the total number of letters it could read and
 * print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	int fd;
	ssize_t lenRD, lenWR;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	/* Allocated memory  of he charcter */
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		close(fd);
		return (0);
	}
	lenRD = read(fd, ptr, letters);
	if (lenRD == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	lenWR = write(STDOUT_FILENO, ptr, lenRD);
	free(ptr);
	if (lenRD != lenWR)
		return (0);
	return (lenWR);
}
