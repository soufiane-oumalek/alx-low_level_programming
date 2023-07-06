#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: is the key and cannot be an string
 * @value:  is the value associated with the key and must be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node;
	unsigned long int index;
	char *v_c;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_c = strdup(value);
	if (!v_c)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] && !(strcmp(ht->array[index]->key, key)))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = v_c;
		return (1);
	}
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
	{
		free(v_c);
		return (0);
	}
	new_hash_node->key = strdup(key);
	if (!new_hash_node->key)
	{
		free(new_hash_node);
		return (0);
	}
	new_hash_node->value = v_c;
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;

	return (1);
}
