#include "hash_tables.h"

/**
 * hash_table_set - sets a value of a hash table.
 *
 * @ht: hash table
 * @key: key to insert
 * @value: value to insert
 *
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node, *tmp, *prev;
unsigned long int index;
node = malloc(sizeof(hash_node_t));
if (ht == NULL || key == NULL || value == NULL || node == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
node->key = strdup(key);
node->value = strdup(value);
node->next = NULL;
tmp = ht->array[index];
prev = ht->array[index];
while (tmp != NULL)
{
tmp = prev->next;
if (strcmp(prev->key, key) == 0)
{
node->next = prev->next;
free(prev->value);
free(prev->key);
free(prev);
break;
}
prev = tmp;

}
if (ht->array[index] == NULL)
ht->array[index] = node;
else
{
node->next = ht->array[index];
ht->array[index] = node;
}
return (1);
}
