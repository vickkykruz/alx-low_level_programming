#include "main.h"
/**
 * read_textfile - A function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the given file description
 * @letters: the lenght of the string
 *
 * Return: fd
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_no, write_no;
	char *c;

	if (filename == NULL)
		return (0);

	/** We will open the file **/
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	/** we want to allocate the memory to read input **/
	c = (char *) malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		close(fd);
		return (0);
	}
	/** We will read the fie into the memory **/
	read_no = read(fd, c, letters);
	if (read_no < 0)
	{
		free(c);
		return (0);
	}
	close(fd);
	/** We will write from he memory to the file **/
	write_no = write(STDOUT_FILENO, c, letters);
	free(c);

	if (read_no != write_no)
		return (0);

	return (write_no);
}
