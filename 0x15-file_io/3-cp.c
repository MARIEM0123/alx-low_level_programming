#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buffer_al(char *f);
void close1(int fd);

/**
 * buffer_al - the function to allocate memory
 * @file: The name of the file
 * Return: the buffer
 */
char *buffer_al(char *file)
{
	char *s;

	s = malloc(sizeof(char) * 1024);

	if (!s)
	{
	dprintf(STDERR_FILENO, "Error: we can't write %s\n", file);
	exit(99);
	}
	return (s);
}

/**
 * close1 - Closes file descriptors
 * @file: The file descriptor
 */
void close1(int file)
{
	int s;

	s = close(file);

	if (s == -1)
	{
	dprintf(STDERR_FILENO, "Error: the file can't close %d\n", file);
	exit(100);
	}
}

/**
 * main - The function copy from file to another
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 if the file is copied
 */
int main(int argc, char *argv[])
{
	int f1, f2, rd, wt;
	char *s;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: copy one file to another\n");
	exit(97);
	}

	s = buffer_al(argv[2]);
	f1 = open(argv[1], O_RDONLY);
	rd = read(f1, s, 1024);
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (rd > 0)
	{
	if (f1 == -1 || rd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read the file %s\n", argv[1]);
	free(s);
	exit(98);
	}

	wt = write(f2, s, rd);
	if (f2 == -1 || wt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to the file %s\n", argv[2]);
		free(s);
		exit(99);
	}

	rd = read(f1, s, 1024);
	}

	free(s);
	close1(f1);
	close1(f2);
	return (0);
}
