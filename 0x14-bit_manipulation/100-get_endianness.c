#include "main.h"

/**
 * get_endianness - checks if the value registered
 * in the processor is little or big endian
 * Return: 0 for big endian or 1 if a little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *i = (char *) &a;

	return (*i);
}
