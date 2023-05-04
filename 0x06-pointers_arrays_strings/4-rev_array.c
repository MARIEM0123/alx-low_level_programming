#include "main.h"
/**
 * reverse_array - A function reverses an array of integers
 * @a: first parameter
 * @n: second parameter
 * Return: is not 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
