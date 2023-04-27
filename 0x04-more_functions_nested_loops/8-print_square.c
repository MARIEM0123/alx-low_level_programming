#include "main.h"

/**
 * print_square - The square of values
 * @size: the parameter to be considered
 * Return: there is no return
 */

void print_square(int size)
{
	int a, b;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
				_putchar('\n');
		}
	}
}
