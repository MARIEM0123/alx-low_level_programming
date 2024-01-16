#include <math.h>
#include "search_algos.h"

/**
 * get_n_next - The funct to have the nth node next to a given node.
 * @node: The first arg is the starting node.
 * @n: The second arg is the number of positions next to the node.
 * Return: The return node n places next to the given node, \
 * or in another case the last node or NULL.
 */
listint_t *get_n_next(listint_t *node, size_t n)
{
	size_t i = 0;
	listint_t *res = NULL;

	res = node;
	for (i = 0; (i < n) && (res) && (res->next); i++)
		res = res->next;
	return (res);
}

/**
 * jump_list - The funct to find a value in a sorted linked list using a jump search.
 * @list: The first arg is the linked list to search in.
 * @size: The second arg is the length of the linked list.
 * @value: The third arg is the value to look for.
 * Return: The return is the  node with the value in the linked list or NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, a = 0, b = 0;
	listint_t *node, *next;

	if (!list)
		return (NULL);
	step = (size_t)sqrt(size);
	node = list;
	next = get_n_next(node, step);
	while (node)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);
		if ((next->n >= value) || (!next->next))
			break;
		node = next;
		next = get_n_next(node, step);
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
