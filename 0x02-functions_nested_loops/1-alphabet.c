#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - C is so cool
 * Return: The return here is 0
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
