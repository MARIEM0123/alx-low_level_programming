#include "main.h"
#include<stdio.h>

/**
 * print_most_numbers - C is so cool
 * Return: The return here is 0
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if ((i == 2) || (i == 4))
			i++;
		else
		{
			_putchar (i + '0');
			i++;
		}
}
_putchar ('\n');
}
