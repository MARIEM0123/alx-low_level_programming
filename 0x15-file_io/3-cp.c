#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *cr_buf(char *f);
void cl_file(int fd);

/**
 * cr_buffer - Allocatation memory
 * @f: The file name
 * Return: the pointer
 */
char *cr_buffer(char *f)
{
	char *s;

	s = malloc(sizeof(char) * 1024);

	if (s == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (s);
}

/**
 * cl_fl - the function closes file descriptors
 * @file: The file descriptor
 */
void cl_fl(int file)
{
	int s;

	s = close(file);

	if (s == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
	}
}

/**
 * main - The function to copy
 * @argc: The number of arguments
 * @argv: An array of arguments
 * Return: 0 if the function succed in copy
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, rd, wt;
	char *s;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	s = cr_buffer(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	rd = read(fd1, s, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
		if (fd1 == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(s);
			exit(98);
		}

		wt = write(fd2, s, rd);
		if (fd2 == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(s);
			exit(99);
		}

		rd = read(fd1, s, 1024);
	}

	free(s);
	cl_fl(fd1);
	cl_fl(fd2);
	return (0);
}
