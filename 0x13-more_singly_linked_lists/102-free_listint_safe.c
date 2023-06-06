#include "lists.h"

/**
 * free_listint_safe - Function
 * @h: pointer
 * Return: != 0
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int a;
	listint_t *b;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			b = (*h)->next;
			free(*h);
			*h = b;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
			}

	*h = NULL;

	return (l);
}

