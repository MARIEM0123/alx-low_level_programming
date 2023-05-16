#include "main.h"
#include <stdlib.h>
/**
 * create_array - the funcion 
 * @size: the parameter
 * @c: the parameter
 * Return: value or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
	if (size == 0 || s == NULL)
                return (NULL);
}

