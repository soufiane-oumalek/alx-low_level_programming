#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key:  is the key you are looking for
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (new_node = ht->array[index]; new_node != NULL; new_node = new_node->next)
	{
		if (strcmp(new_node->key, key) == 0)
		return (new_node->value);
	}
	return (NULL);
}
