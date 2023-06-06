#include "lists.h"

/**
 * print_listint - Function
 * @h: linked list
 * Return: != 0
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}

