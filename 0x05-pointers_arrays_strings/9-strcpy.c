#include "main.h"
/**
 * _strcpy - check the code
 * @dest: first parameter
 * @src: second parameter
 * Return: there is a return
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < 1; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
