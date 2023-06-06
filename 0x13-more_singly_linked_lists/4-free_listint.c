#include "lists.h"

/**
 * free_listint - function
 * @head: parameter
 * Return: != 0
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}

