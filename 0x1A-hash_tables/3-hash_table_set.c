#include "hash_tables.h"

/**
 * hash_table_set - the function for the add operation
 * @ht: A pointer to the table
 * @key: The key parameter
 * @value: The value parameter
 * Return:  0 or 1 depending to the case
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	char *v_cp;
	unsigned long int x, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_cp = strdup(value);
	if (v_cp == NULL)
		return (0);

	x = key_index((const unsigned char *)key, ht->size);
	for (i = x; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_cp;
			return (1);
		}
	}

	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(v_cp);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = v_cp;
	nw->next = ht->array[x];
	ht->array[x] = nw;

	return (1);
}
