#include <stdio.h>
/**
 * _islower - C is so cool
 * @c: the input to check if it's a lowercase
 * Return: The return here is 0
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	return (1);
	else
	return (0);
}
