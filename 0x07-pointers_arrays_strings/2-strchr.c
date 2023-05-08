#include "main.h"
/**
 * _strchr - rhe function locates a character in a string
 * @s: the furst parameter
 * @c: the second parameter
 * Return: Returning 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
