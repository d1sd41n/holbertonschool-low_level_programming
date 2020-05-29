#include "hash_tables.h"
/**
 * hash_table_set - description
 * @ht: description
 * @key: description
 * @value: description
 * Return: description
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valc;
	hash_node_t  *tmp, *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	valc = strdup(value);
	if (valc == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = valc;
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->value = valc;
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node->key);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
