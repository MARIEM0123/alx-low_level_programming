#include "lists.h"
/**
 * print_dlistint - prints the elements of a list
 * @h: head of the list
 * Return: =! NULL
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
