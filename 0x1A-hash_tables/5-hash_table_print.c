#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function to print the key:value pairs from `ht`.
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *bucket;
	char many = 0;

	if (ht == NULL)
	{
		return;
	}
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		bucket = *(ht->array + i);
		while (bucket)
		{
			if (many)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			many = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
