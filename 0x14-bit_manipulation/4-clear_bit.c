#include "main.h"

/**
 * clear_bit - The function sets the value of a bit to 0 at a given index
 * @n: The number in the given index to change into 0
 * @index: index of the bit to set to 0
 * Return: 1 if the conversion is done or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = sizeof(n) * 8;

	if (index > k)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

