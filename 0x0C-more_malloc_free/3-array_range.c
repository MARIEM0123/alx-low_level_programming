#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: NULL or pointer
 */
int *array_range(int min, int max)
{
	int *m;
	int i, n;

	if (min > max)
		return (NULL);
	n = max - min + 2;
	m = malloc(sizeof(int) * n);
	if (m == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		m[i] = min++;
	return (m);
}

