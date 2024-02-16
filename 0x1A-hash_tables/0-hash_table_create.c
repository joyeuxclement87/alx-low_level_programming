#include "hash_tables.h"
/**
 * hash_table_create - function for  creating hash table
 * @size: size for array
 * Return: value for retrurn
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int a;

ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
return (NULL);
ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * size);
if (ht->array == NULL)
return (NULL);

a = 0;
while (a < size)
{
ht->array[a] = NULL;
a++;
}
return (ht);
}
