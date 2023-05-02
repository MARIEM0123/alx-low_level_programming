#include "main.h"

/**
 * print_rev - the function to print the string inversed
 * @s: the string to print
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
