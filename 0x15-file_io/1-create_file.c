#include "main.h"

/**
 * create_file - the function creates a file
 * @filename: the file name
 * @text_content: what to write on the file.
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int i;
	int rt;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;
	rt = write(file, text_content, i);

	if (rt == -1)
		return (-1);

	close(file);

	return (1);
}
