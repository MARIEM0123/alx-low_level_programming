#include "main.h"

/**
 * read_textfile - reads a text from a file and return 0 if it fails
 * @filename: the name of the file
 * @letters: the number of letters to print
 * Return: if success returns the numbers
 * of letters printed if failure returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rdfd, wrfd;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rdfd = read(file, buffer, letters);
	wrfd = write(STDOUT_FILENO, buffer, rdfd);

	close(file);

	return (wrfd);
}
