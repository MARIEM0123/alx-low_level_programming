#include "hash_tables.h"

/**
 * hash_table_print - The function prints a hash table
 * @ht: A pointer to a given  hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nd;
	unsigned long int i;
	unsigned char c = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c == 1)
				printf(", ");

			nd = ht->array[i];
			while (nd != NULL)
			{
				printf("'%s': '%s'", nd->key, nd->value);
				nd = nd->next;
				if (nd != NULL)
					printf(", ");
			}
			c = 1;
		}
	}
	printf("}\n");
}
