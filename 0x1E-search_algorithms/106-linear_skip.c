#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - The funct is to find a value in a sorted linked list with an \
 * @list: The first arg is the linked list with an express lane to search in.
 * @value: The second arg is the value to look for.
 * Return: The return is the node with the value in the linked list or NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i, step, a = 0, b = 0;
	skiplist_t *node, *next;

	if (!list)
		return (NULL);
	node = list;
	next = node->express ? node->express : node;
	while (next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);
		if (next->n >= value)
			break;
		node = next;
		if ((node->n < value) && (node->express == NULL))
		{
			while (next->next)
				next = next->next;
			break;
		}
		next = node->express ? node->express : node;
	}
	a = node->index;
	b = next->index;
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
