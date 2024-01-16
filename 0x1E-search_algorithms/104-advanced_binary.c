#include "search_algos.h"

/**
 * print_array - The funct to display contents of an array.
 * @array: The first arg is the source of the array to print.
 * @l: The second arg is the left index of the array.
 * @r: The third arg is the right index of the array.
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
 * binary_search_index - The funct to find a value in a sorted array using \
 * @array: The first arg is the array to search in.
 * @l: The second arg is the left index of the array.
 * @r: The third arg is the right index of the array.
 * @value: The return is the value to look for.
 * Return: The return is the first index of the value in the array or -1.
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
 * advanced_binary - The funct is the value in a sorted array using a binary search.
 * @array: The first arg is the array to search in.
 * @size: The second arg is the length of the array.
 * @value: The third arg is the value to look for.
 * Return: The return is the first index of the value in the array or -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);
	return (binary_search_index(array, 0, size - 1, value));
}
