#include "main.h"

/**
 * print_binary - The function converts a decimal number to a binary number
 * @n: the decimal number to be converted into a binary number
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int a;

	for (i = 10; i >= 0; i--)
	{
		a = n >> i;
		if (a & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
