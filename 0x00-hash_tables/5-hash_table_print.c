#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: Always None.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned int i;
hash_node_t *node;
printf("{");
for (i = 0; i < ht->size; i++)
{
for (node = ht->array[i]; node != NULL; node = node->next)
{
printf("%s : %s, ", node->key, node->value);
}
}
printf("}\n");
}

