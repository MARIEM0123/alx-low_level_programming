#include "search_algos.h"

/**
 * linear_search -  A function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: The first argument the array to search in 
 * @size: The second argument the length of the array.
 * @value: The third argument the value to look for.
 * Return: The return is the first index of the value in the array or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}

