#include "main.h"
#include <stdio.h>

/**
 * Not_open - the function tests if the file can't open.
 * @f1 : file to copy from
 * @f2 : file to copy to
 * @argv: arguments
 * Return: there is no return
 */
void Not_open(int f1, int f2, char *argv[])
{
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can't open %s\n", argv[1]);
		exit(98);
	}
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file can't be created %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - to copy from a file to another
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int f1, f2, cl;
	ssize_t i, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f1 = open(argv[1], O_RDONLY);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	Not_open(f1, f2, argv);

	i = 1024;
	while (i == 1024)
	{
		i = read(f1, buffer, 1024);
		if (i == -1)
			Not_open(-1, 0, argv);
		nwr = write(f2, buffer, i);
		if (nwr == -1)
			Not_open(0, -1, argv);
	}

	cl = close(f1);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file won't close fd %d\n", f1);
		exit(100);
	}

	cl = close(f2);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: The file won't close %d\n", f1);
		exit(100);
	}
	return (0);
}
