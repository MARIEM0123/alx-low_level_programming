#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer to the array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		s[i] = 0;
	}
	return (s);
}
