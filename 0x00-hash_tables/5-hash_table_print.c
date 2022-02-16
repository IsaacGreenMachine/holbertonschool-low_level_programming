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
int flag = 0;
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
for (node = ht->array[i]; node != NULL; node = node->next)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
flag = 1;
}
}
printf("}\n");
}

