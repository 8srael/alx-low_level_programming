#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char flag = 0; /* 0 while no data has been printed yet */

	if (!ht || !ht->array)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = *(ht->array + index);
		while (tmp) /* tmp is the next element of the hashtable */
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
