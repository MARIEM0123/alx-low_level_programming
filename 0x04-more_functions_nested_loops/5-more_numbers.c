#include "main.h"
#include<stdio.h>
/**
 * more_numbers - C is so cool
 * Return: The return here is 0
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
{
	i = 0;
	while (i <= 14)
	{
		if (i >= 10)
	{
		_putchar ('1');
	}
	_putchar (i % 10 + '0');
	i++;
}
_putchar ('\n');
}
}
