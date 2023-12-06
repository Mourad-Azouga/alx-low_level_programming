#include "hash_tables.h"
/**
 * key_index - returns the index of the key
 *
 * @key: the key
 *
 * @size: is the size of the array of the hash table
 *
 * Return: Returns the index at which the key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	index %= size;
	return (index);
}