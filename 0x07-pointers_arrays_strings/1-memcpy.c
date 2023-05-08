#include "main.h"
/**
 * _memcpy - the function copies memory area
 * @dest: the first parameter
 * @src: the secod parameter
 * *@n: the third parameter
 * Return: Returning dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int i;

	for (i = n; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
