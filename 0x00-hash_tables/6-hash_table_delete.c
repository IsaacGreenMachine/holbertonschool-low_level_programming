#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: Always void.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
ht->array[i] = node->next;
free(node->key);
free(node->value);
free(node);
node = ht->array[i];
}
}
free(ht->array);
free(ht);
}

