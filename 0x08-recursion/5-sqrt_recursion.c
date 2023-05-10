#include "main.h"
int f(int n, int i);
/**
 * _sqrt_recursion -returns a natural square root of a number
 * @n: the parameter
 * Return: != 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (f(n, 0));
}

/**
 * f - the natural square
 * @n: the first parameter
 * @i: the second parameter
 * Return: != 0
 */

int f(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (f(n, i + 1));
}
