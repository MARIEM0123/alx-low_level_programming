#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *m;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	m = malloc(sizeof(int) * n);

	if (m == NULL)
		return (NULL);

	for (i = 0; i <= n; i++)
		m[i] = min++;
	return (m);
}

