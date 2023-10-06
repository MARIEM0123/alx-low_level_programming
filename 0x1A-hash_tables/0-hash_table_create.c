#include "hash_tables.h"

/**
 * hash_table_create - the fuction creates a hash table
 * @size: The size of the array
 * Return: NULL or a pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int k;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		h_table->array[k] = NULL;
	return (h_table);
}
