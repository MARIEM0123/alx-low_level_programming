#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node to the linked list
 * @head: pointer parameter
 * @str: parameter to add
 * Return: != 0 or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *h = *head;
	unsigned int l = 0;

	while (str[l])
		l++;
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = l;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (h->next)
		h = h->next;
	h->next = add;
	return (add);
}
