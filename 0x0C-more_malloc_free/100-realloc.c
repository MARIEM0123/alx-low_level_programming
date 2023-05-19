#include <stdlib.h>
#include "main.h"

/**
 * *_realloc -  equivalent of realloc standard function
 * @ptr: pointer
 * @old_size: size for ptr
 * @new_size: size for new memory allocation
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	s = malloc(new_size);
	if (!s)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			s[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			s[i] = old_ptr[i];
	}
	free(ptr);
	return (s);
}
