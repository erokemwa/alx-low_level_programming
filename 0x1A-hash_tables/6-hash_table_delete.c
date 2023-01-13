#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table to be deleted
 *Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	hash_node_t *nxt = NULL;
	unsigned long int idx;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			current = ht->array[idx];
			nxt = current;
			while (nxt != NULL)
			{
				nxt = nxt->next;
				free(current->value);
				free(current->key);
				free(current);
				current = nxt;
			}
		}
	}
	free(ht->array);
	free(ht);
}
