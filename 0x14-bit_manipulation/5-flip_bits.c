#include "main.h"

/**
 * flip_bits - The function returns the number of bits to change to flip
 * from a number to an other
 * @n: the number
 * @m: the number
 * Return: number of bits to change to flip from a number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		a = b >> i;
		if (a & 1)
			j++;
	}
	return (j);
}
