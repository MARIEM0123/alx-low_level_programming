#include "main.h"
/**
 * _memset - The function fills a block of memory
 * @s: the first parameter
 * @b: the second parameter
 * @n: the third parameter
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
