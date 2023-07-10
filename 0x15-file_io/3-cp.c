#include "main.h"
/**
 * check_err - This is a function that check for the file if it can be
 * open
 * @file_f: This is an argument that represent the file from
 * @file_t: This is an argument that represent the file to
 * @argv: This is an argument that represent the vector argument
 *
 * Return: This function return a void
 */
void check_err(int file_f, int file_t, char *argv[])
{
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file  %s\n", argv[1]);
		exit(98);
	}
	if (file_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - This is a function the entry point
 * @argc: This is an argument that represent the argument count
 * @argv: This is an argument that represent the vector string of argument
 *
 * Return: The function return a 0
 */
int main(int argc, char *argv[])
{
	ssize_t nch, nw;
	int err_no, file_f, file_t;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_f = open(argv[1], O_RDONLY);
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_err(file_f, file_t, argv);

	nch = 1024;
	while (nch == 1024)
	{
		nch = read(file_f, buffer, 1024);
		if (nch == -1)
			check_err(-1, 0, argv);
		nw = write(file_t, buffer, nch);
		if (nw == -1)
			check_err(0, -1, argv);
	}
	err_no = close(file_f);
	if (err_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	err_no = close(file_t);
	if (err_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f);
		exit(100);
	}
	return (0);
}
