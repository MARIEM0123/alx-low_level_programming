#include "main.h"
#include <stdlib.h>
#include <assert.h>
/**
 * create_array - the function
 * @size: the parameter
 * @c: the parameter
 * Return: value or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		s[i] = c;
	if (size != 0)
	{
		return (s);
		return (0);
	}
	else
		return (NULL);
}
