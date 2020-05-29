#include "hash_tables.h"
/**
 * hash_table_print - description
 * @ht: description
 * Return: description
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, fnode;
	hash_node_t *node;

	if (ht == NULL)
		return;

	fnode = 0;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (fnode)
				printf(", '%s': '%s'", node->key, node->value);
			else
				printf("'%s': '%s'", node->key, node->value);

			fnode++;
			node = node->next;
		}
	}
	printf("}\n");
}
