#include "lists.h"

/**
 * sum_listint - function
 * @head: pointer
 * Return: != 0
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *i = head;

	while (i)
	{
		s += i->n;
		i = i->next;
	}

	return (s);
}

