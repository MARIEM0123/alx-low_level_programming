#include "lists.h"
#include <stdlib.h>

/**
 * list_len -prints the number of elements in the linked list
 * @h: pointer parameter
 * Return: != 0
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
