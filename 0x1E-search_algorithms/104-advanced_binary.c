#include "search_algos.h"

/**
 * print_array - The funct to display the array contents
 * @array: The first arg is the source
 * @l: The second arg is the left index
 * @r: The third arg is the right index
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index - The funct to find a value in thearray
 * @array: The first arg is the array
 * @l: The second arg is the left index
 * @r: The third arg is the right index
 * @value: The return is the value
 * Return: The return is the first index or -1.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, l, r);
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
	{
		return (binary_search_index(array, l, m, value));
	}
	else if (value == *(array + m))
	{
		if ((m > 0) && (*(array + m - 1) == value))
		{
			return (binary_search_index(array, l, m, value));
		}
		return ((int)m);
	}
	else
	{
		return (binary_search_index(array, m + 1, r, value));
	}
}

/**
 * advanced_binary - The funct is the value in the array
 * @array: The first arg is the array
 * @size: The second arg is the length
 * @value: The third arg is the value
 * Return: The return is the first index or -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);
	return (binary_search_index(array, 0, size - 1, value));
}
