#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <stddef.h>
/**
 * is_elf - This is a function that check if the file is an elf file
 * @buff: This is an argumnet that represent the buffer allocated
 *
 * Return: This function return (1) is it an elf file otherwise (0) if not
 */
int is_elf(char *buff)
{
	int add = (int)buff[0];
	char E = buff[1];
	char L = buff[2];
	char F = buff[3];

	if (add == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}
/**
 * print_add - This is a function that prints the address of memory
 * @buff: This is an argument that represent the buffer
 *
 * Retun: This function return a void (nothing)
 */
void print_add(char *buff)
{
	int i, base;
	char ch;

	printf("  Entry point address:			0x");

	ch = buff[4] + '0';
	if (ch == '1')
	{
		base = 26;
		printf("80");
		for (i = base; i >= 22; i--)
		{
			if (buff[i] > 0)
				printf("%x", buff[i]);
			else if (buff[i] < 0)
				printf("%x", 256 + buff[i]);
		}
		if (buff[7] == 6)
			printf("00");
	}

	if (ch == '2')
	{
		base = 26;

		for (i = base; i > 23; i--)
		{
			if (buff[i] >= 0)
				printf("%02x", buff[i]);
			else if (buff[i] < 0)
				printf("%02x", 256 + buff[i]);
		}
	}
	printf("\n");
}
/**
 * print_type - This is a function that output the type
 * @buff: This is an argument that represent the allocated space
 *
 * Return: This function returna void (nothing)
 */
void print_type(char *buff)
{
	char ty = buff[16];

	if (buff[5] == 1)
		ty = buff[16];
	else
		ty = buff[17];

	printf("  Type:				");
	if (ty == 0)
		printf("NONE (NO file type)\n");
	else if (ty == 1)
		printf("REL (Relocatable file)\n");
	else if (ty == 2)
		printf("EXEC (Executable file)\n");
	else if (ty == 3)
		printf("DYN (Shared object file)\n");
	else if (ty == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", ty);
}
/**
 * print_osbi - This is a function that prints out the osabi
 * @buff: This is an argument that represent the buffer
 *
 * Return: This function return void (nothing)
 */
void print_osbi(char *buff)
{
	char os = buff[7];

	printf("  OS/ABI:			");
	if (os == 0)
		printf("UNIX - System V\n");
	else if (os == 2)
		printf("UNIX - NetBSD\n");
	else if (os == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", os);

	printf("ABI Version: 			%d\n", buff[8]);
}
/**
 * print_ver - This is a function that print the version of the system
 * @buff: This is an argument that represent the allocated buff
 *
 * Return: This function return void
 */
void print_ver(char *buff)
{
	int ver = buff[6];

	printf("     Version:				%d", ver);

	if (ver == EV_CURRENT)
		printf("  (current)");

	printf("\n");
}
/**
 * print_data - This is a function that prints data
 * @buff: This is an argument that represent the info
 *
 * Return: This is a function that return nothing
 */
void print_data(char *buff)
{
	char ch = buff[5];

	printf("    Data:			2's complement");
	if (ch == 1)
		printf(", little endian\n");

	if (ch == 2)
		printf(", big endian\n");
}
/**
 * print_m - This is a function that output magic info
 * @buff: This is an argument that reprsent the storage
 *
 * Return: This function ia a void an it returns nothing
 */
void print_m(char *buff)
{
	int i;

	printf("  Magic     ");

	for (i = 0; i < 16; i++)
		printf("  %02x", buff[i]);

	printf("\n");
}
/**
 * is_sys - This is a function that chect the capliacity of the system
 * @buff: This is an argument that represent the buff memory
 *
 * Return: The function is a void and i return nohing
 */
void is_sys(char *buff)
{
	char ch = buff[4] + '0';

	if (ch == '0')
		exit(98);

	printf("ELF Header:\n");
	print_m(buff);

	if (ch == '1')
		printf("   Class:			ELF32\n");
	if (ch == '2')
		printf("   Class:			ELF64\n");

	print_data(buff);
	print_ver(buff);
	print_osbi(buff);
	print_type(buff);
	print_add(buff);
}
/**
 * main - This is a function that check the code
 * @argc: This is an argument that represent the umber of arguments
 * @argv: Thus is an argument that represent the vector strings
 *
 * Return: This function was return (0)
 */
int main(int argc, char *argv[])
{
	int fd, rd;
	char buff[27];

	/* Validete the arguments passed */
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: file can't be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	rd = read(fd, buff, 27);

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: This file can't be read\n");
		exit(98);
	}
	if(!is_elf(buff))
	{
		dprintf(STDERR_FILENO, "Error: It is not an ELF File\n");
		exit(98);
	}

	is_sys(buff);
	close(fd);

	return (0);
}
