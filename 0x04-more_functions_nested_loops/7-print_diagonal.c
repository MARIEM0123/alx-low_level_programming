#include "main.h"
#include<stdio.h>
/**
 * print_diagonal - C is so cool
 * @n: the parameter to be considered
 * Return: The return here is 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar ('\n');
	else
	{
	for (j = 1; j < n; j++)
{
	_putchar (92);
	_putchar ('\n');
	for (i = 0; i < j ; i++)
		_putchar (' ');
}
	_putchar (92);
	_putchar ('\n');

}
}
