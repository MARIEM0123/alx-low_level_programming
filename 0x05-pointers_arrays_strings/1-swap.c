#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two variables
 * @a: the first parameter
 * @b: the second parameter
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
