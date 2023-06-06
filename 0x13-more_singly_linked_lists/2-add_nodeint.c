#include "lists.h"

/**
 * add_nodeint - Function
 * @head: parameter
 * @n: parameter
 * Return: != 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	new = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = i;

	return (i);
}

