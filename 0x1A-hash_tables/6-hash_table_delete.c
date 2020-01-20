#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - prints a hash table.
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *node, *tmp;
	unsigned long int j;

	if (ht == NULL)
		return;
	for (j = 0; j < ht->size; j++)
	{
		node = ht->array[j];
		while (node)
		{
       			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
