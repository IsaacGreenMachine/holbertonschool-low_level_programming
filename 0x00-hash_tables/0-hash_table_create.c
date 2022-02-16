#include "hash_tables.h"
/**
 * hash_table_create - creates and returns a hash table.
 * @size: size of hash table to be created
 * Return: pointer to a hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashTable = malloc(sizeof(hash_table_t));
if (hashTable == NULL)
return (NULL);
hashTable->size = size;
hashTable->array = malloc(sizeof(hash_node_t *) * size);
if (hashTable->array == NULL)
{
free(hashTable);
return (NULL);
}
for (unsigned int i = 0; i < size; i++)
hashTable->array[i] = NULL;
return (hashTable);
}
