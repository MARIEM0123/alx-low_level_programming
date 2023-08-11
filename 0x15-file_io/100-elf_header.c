#include "main.h"

/**
 * pr_er - the output is an error message to stderr.
 * @m: The message writen
 */
void pr_er(const char *m)
{
	dprintf(STDERR_FILENO, "%s\n", m);
}

/**
 * main - Display information from the ELF header of a given ELF file.
 * @argc: The arguments number
 * @argv: An array of  arguments
 * Return: 0 in case of success 98 if not
 */
int main(int argc, char *argv[])
{
	int file;
	ssize_t m;
	Elf64_Ehdr header;
	int k;

	if (argc != 2)
	{
		pr_er("Usage: elf_header elf_filename");
		return (98);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		pr_er("Error: Can't read from the file");
		return (98);
	}
	m = read(file, &header, sizeof(header));
	if (m != sizeof(header))
	{
		pr_er("Error: Can't read from the header");
		close(file);
		return (98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		pr_er("Error: Not an ELF file");
		close(file);
		return (98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (k = 0; k < EI_NIDENT; k++)
		printf("%02x ", header.e_ident[k]);
	printf("\n");
	printf("  Class:   ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE: printf("ELFNONE");
				   break;
		case ELFCLASS64:   printf("ELF64");	break;
		case ELFCLASS32:   printf("ELF32");	break;
		default:           printf("<unknown>");	break;
	}
	printf("\n");
	close(file);
	return (0);
}
