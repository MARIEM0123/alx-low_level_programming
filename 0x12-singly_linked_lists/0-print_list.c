#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a given linked list
 * @h: pointer parameter
 * Return: != 0
 */
size_t print_list(const list_t *h)
{
        size_t i = 0;

        while (h)
        {
                if (h->str == NULL)
                        printf("[0] (nil)\n");
                else
                        printf("[%u] %s\n", h->len, h->str);

                h = h->next;
                i++;
        }

        return (i);
}
