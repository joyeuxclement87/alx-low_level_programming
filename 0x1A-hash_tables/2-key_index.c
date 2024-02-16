#include "hash_tables.h"
/**
 * key_index - function for key index
 * @key: key for to used
 * @size: array size for hash table
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
