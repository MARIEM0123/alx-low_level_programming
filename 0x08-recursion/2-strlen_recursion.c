#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: The parameter
 * Return: != 0
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		l = l + _strlen_recursion(s + 1);
	}
	return (l);
}
