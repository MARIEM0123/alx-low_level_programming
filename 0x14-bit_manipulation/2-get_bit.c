#include "main.h"

/**
 * get_bit - The function gives the value of the bit
 * in a given index of a decimal number converted to a binary number
 * @n: the given decimal number
 * @index: the given index of the bit to return
 * Return: the value of the bit in the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int r;
	unsigned int k = sizeof(n) * 8;

	if (index >= k)
		return (-1);
	r = n >> index & 1;
	return (r);
}
