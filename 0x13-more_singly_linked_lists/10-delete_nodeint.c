#include "lists.h"

/**
 * delete_nodeint_at_index - functiion
 * @head: pointer
 * @index: parameter
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *j = *head;
	listint_t *k = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(j);
		return (1);
	}

	while (i < index - 1)
	{
		if (!j || !(j->next))
			return (-1);
		j = j->next;
		i++;
	}

	k = j->next;
	j->next = k->next;
	free(k);

	return (1);
}

