#include "hash_tables.h"

/**
 * hash_table_delete - the funct to delete a hash table
 * @ht: A pointer parameter
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *node, *k;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				k = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = k;
			}
		}
	}
	free(hd->array);
	free(hd);
}
