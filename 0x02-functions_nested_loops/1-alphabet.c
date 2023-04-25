#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - C is so cool
 * Return: The return here is 0
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
void _print_alphabet(void);
int main(void)
{
	void print_alphabet();
	return (0);
}
