#include <time.h>
#include <stdio.h>
/**
 * _isalpha - C is so cool
 * @c: to check if an alphabet
 * Return: The return here is 0
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
	return (1);
	else
	return (0);
}


