#include "hash_tables.h"

/**
 * key_index - get the index of position of the pair stored 
 *     in array of a hash table
 * @key: The key parameter
 * @size: The size parameter
 * Return: The index parameter
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
