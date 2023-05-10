#include "main.h"

int f(int n, int i);

/**
 * is_prime_number - prime number
 * @n: the parameter
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (f(n, n - 1));
}

/**
 * f - prime functio,n
 * @n: the first parameter
 * @i: the second parameter
 * Return: 1 or 0
 */
int f(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (f(n, i - 1));
}
