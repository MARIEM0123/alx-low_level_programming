#include "main.h"

/**
 * set_bit - The function sets the value of a bit to 1 at a given index
 * @n: The number in the given index to change into 1
 * @index: index of the bit to set to 1
 * Return: 1 if it works or -1 if any error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = sizeof(n) * 8;

	if (index > k)
		return (-1);

	*n = ((1L << index) | *n);
	return (1);
}
