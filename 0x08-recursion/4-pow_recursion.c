#include "main.h"

/**
 * _pow_recursion - returns a value raised to a the power
 * @x: the first parameter
 * @y: the second parameter
 * Return: != 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
