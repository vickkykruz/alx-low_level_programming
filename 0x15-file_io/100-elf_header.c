#include "main.h"
void check_file(unsigned char *file);
void print_magic(unsigned char *magic);
void print_class(unsigned char *class);
void print_data(unsigned char *data);
void print_version(unsigned char *version);
void print_osabi(unsigned char *osabi);
void print_abi(unsigned char *abi);
void print_type(unsigned int type, unsigned char *e_ident);
void print_entry_address(unsigned long int entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_file - A function that if the given file is an EFL or not
 * @file: The given file struct
 *
 * Return: void
*/
void check_file(unsigned char *file)
{
	int i = 0;

	while (i < 4)
	{
		if (file[i] != 127 && file[i] != 'E' && file[i] != 'L' && file[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: This file is not an ELF file");
			exit(98);
		}
		i++;
	}
}

/**
 * print_magic - A function that may contain values which start with
 * the prefix ELF.
 * @magic: The given pointer input from the excuitable file
 *
 * Description: This array of bytes specifies how to interpret the file,
 * independent of the processor or the file's remaining contents.
 *
 * Return: void
*/
void print_magic(unsigned char *magic)
{
	int i = 0;

	printf("Magic:\t");

	while (i < EI_NIDENT)
	{
		printf("%02x", magic[i]);

		if (i == magic[i])
			printf("\n");
		else
			printf(" ");
		i++;
	}
}

/**
 * print_class - A function that identifies the architecture for this binary.
 * @class: The fifth byte identifies of the given pointer
 *
 * Return: void
*/
void print_class(unsigned char *class)
{
	printf("\nClass:\t\t\t\t");
	switch (class[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", class[EI_CLASS]);
	}
}

/**
 * print_data - A function that encoding of the processor-specific data
 * in the file.
 * @data: The sixth byte specifies the data
 *
 *
 * Return: void
*/
void print_data(unsigned char *data)
{
	printf("Data:\t\t\t\t");
	switch (data[EI_DATA])
	{
	case ELFDATANONE:
		printf("\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little-endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big-endian\n");
		break;
	default:
		printf("<unknown: %x>\n", data[EI_DATA]);
	}
}

/**
 * print_version - A function that display the version of the ELF
 * @version: This is the seventh by of the given pointers
 *
 * Return: void
*/
void print_version(unsigned char *version)
{
	printf("Version:\t\t\t%d", version[EI_VERSION]);

	switch (version[EI_VERSION])
	{
	case EV_NONE:
		printf(" (current)\n");
		break;
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
	}
}

/**
 * print_osabi - A function that interprete those fields is determined
 * by the value of this byte.
 * @osabi: This is the eighth byte identifies the operating system and
 * ABI to which the object is targeted.
 *
 * Description: Some fields in other ELF structures have flags and values that
 * have platform-specific meanings;
 *
 * Return: void
*/

void print_osabi(unsigned char *osabi)
{
	printf("OS/ABI:\t\t\t\t");

	switch (osabi[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case  ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("UNIX - ARM architecture\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("UNIX - Stand-alone (embedded)\n");
		break;
	default:
		printf("<unknown %x>\n", osabi[EI_OSABI]);
	}
}

/**
 * print_abi - A function that interprete the version number is dependent
 * on the ABI identified by the EI_OSABI field.
 * @abi: This is the ninth byte identifies the version of the ABI to
 * which the object is targeted.
 *
 * Description: This field is used to distinguish among incompatible versions
 * of an ABI.
 * Return: void
*/
void print_abi(unsigned char *abi)
{
	printf("ABI Version:\t\t\t%d\n", abi[EI_ABIVERSION]);
}

/**
 * print_type - A function that identifies the object file
 * @type: The given ELF type
 * @e_ident: The given array that containe the ELF Class
 *
 * Return: void
*/
void print_type(unsigned int type, unsigned char *e_ident)
{
	printf("Type:\t\t\t\t");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	switch (type)
	{
	case ET_NONE:
		printf("None (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown %x>\n", type);
	}
}

/**
 * print_entry - A function that prints the entry point of an ELF header.
 * @entry: The address of the given ELF entry point.
 * @e_ident: A given pointer to an array containing the ELF class.
 *
 * Return: void
 */
void print_entry(unsigned long int entry, unsigned char *e_ident)
{
	printf("Entry point address:\t\t");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - a program that displays the information contained in the ELF header
 * at the start of an ELF file.
 * @agrc: The number of the arguments supplied
 * @agrv: The array of agruments vectors
 *
 * Return: 0
*/

/* __attribute__ format is specifies that the function takes printf, scanft,*/
/* strftimes style arguments that should be type checked against a format */
/* string */

int main(int __attribute__((__unused__)) agrc, const char **agrv)
{
	Elf64_Ehdr *ptr;
	/* ElfN_Ehdr: From the elf.h */

	int fd, rd_len;
	/** Check many arguments is theere **/
	if (agrc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	/* Operation here is to read the executable file to the memory */
	fd = open(agrv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file on open %s\n", agrv[1]);
		exit(98);
	}
	ptr = malloc(sizeof(Elf64_Ehdr));
	if (ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
	rd_len = read(fd, ptr, sizeof(Elf64_Ehdr));
	if (rd_len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file on read  %s\n", agrv[1]);
		exit(98);
	}

	/** The Information We want To display **/
	check_file(ptr->e_ident);
	printf("ELF Header\n");
	print_magic(ptr->e_ident);
	print_class(ptr->e_ident);
	print_data(ptr->e_ident);
	print_version(ptr->e_ident);
	print_osabi(ptr->e_ident);
	print_abi(ptr->e_ident);
	print_type(ptr->e_type, ptr->e_ident);
	print_entry(ptr->e_entry, ptr->e_ident);

	return (0);
}
