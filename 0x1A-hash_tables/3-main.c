#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int size, i;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "hetairas");
	hash_table_set(ht, "mentioner", "mentioner");
	hash_table_set(ht, "heliotropes", "heliotropes");
	hash_table_set(ht, "neurospora", "neurospora");
	hash_table_set(ht, "depravement", "depravement");
	hash_table_set(ht, "serafins", "serafins");
	hash_table_set(ht, "stylist", "stylist");
	hash_table_set(ht, "subgenera", "subgenera");
	hash_table_set(ht, "joyful", "joyful");
	hash_table_set(ht, "synaphea", "synaphea");
	hash_table_set(ht, "redescribed", "redescribed");
	hash_table_set(ht, "urites", "urites");
	hash_table_set(ht, "dram", "dram");
	hash_table_set(ht, "vivency", "vivency");

    size = ht->size;
    for (i = 0; i < size; i++)
    {
        if (ht->array[i] == NULL)
            printf("%i ------\n", i);
        else
            printf("%i %s: %s\n", i, ht->array[i]->key, ht->array[i]->value);
    }
    return (EXIT_SUCCESS);
}
