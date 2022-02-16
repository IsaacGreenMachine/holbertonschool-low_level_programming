#include "hash_tables.h"
/**
 * hash_table_get - gets a value from a hash table.
 * @ht: hash table
 * @key: key to retrieve value for
 * Return: value from hash table.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
if (ht == NULL || key == NULL)
return (NULL);
if (node == NULL)
{
return (NULL);
}
for (; node != NULL; node = node->next)
{
if (strcmp(node->key, key) == 0)
return (node->value);
}
return (NULL);
}
