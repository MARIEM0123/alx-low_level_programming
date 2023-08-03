#include "main.h"
#include "main.h"

/**
 * binary_to_uint - The function converts a binary number to unsigned int
 * @b: The binary number
 * Return: the number converted into an unsighed int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uns_int = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		uns_int = 2 * uns_int + (*b++ - '0');
	}
	return (uns_int);
}
