#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: The first parameter
 * @src: The second parameter
 * @n: The third parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
