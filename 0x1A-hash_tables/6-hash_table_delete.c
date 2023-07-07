#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer for hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *hash_node_ptr, *p;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			for (hash_node_ptr = ht->array[index]; hash_node_ptr != NULL; hash_node_ptr = p)
			{
				p = hash_node_ptr->next;
				free(hash_node_ptr->key);
				free(hash_node_ptr->value);
				free(hash_node_ptr);
			}
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
