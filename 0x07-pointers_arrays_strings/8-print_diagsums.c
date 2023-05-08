#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of two diagonals of a matrix of integers
 * @a: the first parameter
 * @size: the second parameter
 * Return: Returning 0
 */
void print_diagsums(int *a, int size)
{
	int e, b, c;

	e = 0;
	b = 0;

	for (c = 0; c < size; c++)
	{
		e = e + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		b += a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", e, b);
}
