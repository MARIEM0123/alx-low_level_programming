#include "main.h"

/**
 * print_rev - the function to print the string inversed
 * @s: the string to print
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
