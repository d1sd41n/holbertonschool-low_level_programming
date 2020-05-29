#include "hash_tables.h"
/**
 * hash_table_delete - description
 * @ht: description
 * Return: description
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t  *tmp;
	unsigned int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			tmp = ht->array[index];
			ht->array[index] = ht->array[index]->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
