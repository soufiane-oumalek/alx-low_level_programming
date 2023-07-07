#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash tabl
 * @ht: pointer to the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *hash_node_ptr;
	unsigned char c = 0;

	if (!ht)
		return;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (ht->array[index] != NULL)
			{
				if (c == 1)
					printf(", ");

				hash_node_ptr = ht->array[index];
				while (hash_node_ptr != NULL)
				{
					printf("'%s' : '%s'", hash_node_ptr->key, hash_node_ptr->value);
					hash_node_ptr = hash_node_ptr->next;
					if (hash_node_ptr != NULL)
						printf(", ");
				}
				c = 1;
			}
		}
		index++;
	}
	printf("}\n");
}
