#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash tabl
 * @ht: pointer to the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	char *p = "";

	if (!ht)
		return;
	fprintf(stdout, "{");
	while (i < (int)ht->size)
	{
		while (ht->array[i])
		{
			fprintf(stdout, "%s'%s': '%s'", p, ht->array[i]->key, ht->array[i]->value);
			p = ", ";
			ht->array[i] = ht->array[i]->next;
		}
		i++;
	}
	fprintf(stdout, "}\n");
}
