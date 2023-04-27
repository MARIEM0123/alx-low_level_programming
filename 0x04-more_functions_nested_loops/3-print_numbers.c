#include "main.h"
#include<stdio.h>
/**
 * print_numbers - C is so cool
 * @i: the number to consider
 * Return: The return here is 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar (i + '0');
	_putchar ('\n');
}
