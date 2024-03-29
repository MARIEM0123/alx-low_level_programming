#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


void ch_elf(unsigned char *elf_ident);
void p_magic(unsigned char *elf_ident);
void p_class(unsigned char *elf_ident);
void p_data(unsigned char *elf_ident);
void p_version(unsigned char *elf_ident);
void p_abi(unsigned char *elf_ident);
void p_osabi(unsigned char *elf_ident);
void p_type(unsigned int elf_type, unsigned char *elf_ident);
void p_entry(unsigned long int elf_entry, unsigned char *elf_ident);
void cl_elf(int elf);

/**
 * ch_elf - Checks if a file is an ELF file
 * @elf_ident: A pointer to an array containing the ELF magic numbers
 * Return: There is no return
 */
void ch_elf(unsigned char *elf_ident)
{
	int k;

	for (k = 0; k < 4; k++)
	{
		if (elf_ident[k] != 127 &&
		    elf_ident[k] != 'E' &&
		    elf_ident[k] != 'L' &&
		    elf_ident[k] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * p_magic - the function prints the magic numbers of an ELF header
 * @e_ident: A pointer to an array of the ELF magic numbers
 * Return: There is no return
 */
void p_magic(unsigned char *e_ident)
{
	int k;

	printf(" Magic: ");

	for (k = 0; k < EI_NIDENT; k++)
	{
		printf("%02x", e_ident[k]);

		if (k == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * p_class - the function prints the class of an ELF header
 * @e_ident: A pointer to an array of ELF class
 * Return: There is no return
 */
void p_class(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * p_data - the function prints the data of an ELF header
 * @e_ident: A pointer to an array of ELF class.
 */
void p_data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * p_version - the function prints the version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF version.
 */
void p_version(unsigned char *e_ident)
{
	 printf(" Version: %d",
		 e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * p_osabi - the function prints the abi of an ELF header
 * @e_ident: A pointer to an array of ELF version.
 */
void p_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
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
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * p_abi - the function prints the abi version of an ELF header
 * @e_ident: A pointer to an array containing the ELF abi version
 */
void p_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * p_type - the function prints the type of an ELF header
 * @e_type: The ELF type
 * @e_ident: A pointer to an array of ELF class
 */
void p_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * p_entry - the function prints the entry point of an ELF header
 * @e_entry: The pointer to the ELF entry point
 * @e_ident: A pointer to the ELF class
 */
void p_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * cl_elf - the function closes an ELF file
 * @elf: The file descriptor of the ELF file
 * Return: there is no return
 */
void cl_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the ELF HEADER
 * @argc: The number of arguments
 * @argv: An array of the arguments
 * Return: returns 98 if the file is not an ELF and 0 in case
 * success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int opn, rd;

	opn = open(argv[1], O_RDONLY);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		cl_elf(opn);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(opn, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		cl_elf(opn);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	ch_elf(header->e_ident);
	printf("ELF Header:\n");
	p_magic(header->e_ident);
	p_class(header->e_ident);
	p_data(header->e_ident);
	p_version(header->e_ident);
	p_osabi(header->e_ident);
	p_abi(header->e_ident);
	p_type(header->e_type, header->e_ident);
	p_entry(header->e_entry, header->e_ident);
	free(header);
	cl_elf(opn);
	return (0);
}
