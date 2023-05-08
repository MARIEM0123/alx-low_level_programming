#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: the first parameter
 * @needle: the second parameter
 * Return: Returning 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
