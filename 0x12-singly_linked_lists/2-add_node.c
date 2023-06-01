#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node to linked list
 * @head: pointer parameter
 * @str: parameter to add
 * Return: != 0 or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int l = 0;

	while (str[l])
		l++;
	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = l;
	add->next = (*head);
	(*head) = add;
	return (*head);
}
