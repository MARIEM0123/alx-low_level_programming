#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: pointer
 * @idx: parameter
 * @n: parameter
 * Return: != 0 or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *j;
	listint_t *k = *head;

	new = malloc(sizeof(listint_t));
	if (!j || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; k && i < idx; i++)
	{
		if (i == idx - 1)
		{
			j->next = k->next;
			j->next = j;
			return (j);
		}
		else
			k = k->next;
	}

	return (NULL);
}

