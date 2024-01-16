#include "search_algos.h"

/**
 * linear_search - The funct to find a value in a sorted array
 * @array: The first arg The array
 * @size: The second arg The size
 * @value: The third arg The value
 * Return: The return is the index of value or -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t inc;

	if (array == NULL)
		return (-1);
	for (inc = 0; inc < size; inc++)
	{
		printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
		if (array[inc] == value)
			return (inc);
	}
	return (-1);
}
