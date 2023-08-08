#include "main.h"

/**
 * append_text_to_file - the function add text at the end of a file
 * @filename: the file name
 * @text_content: the text
 * Return: 1 if success or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int i;
	int rt;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		rt = write(file, text_content, i);

		if (rt == -1)
			return (-1);
	}

	close(file);

	return (1);
}
