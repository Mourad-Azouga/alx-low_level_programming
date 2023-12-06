#include "hash_tables.h"
/**
 * hash_table_get - Get the value from a hash table
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Returns the value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !ht->array || !key) {
		return (NULL);
    }
	idx = key_idx((unsigned char *)key, ht->size);

	node = ht->array[idx];
	if (!node) {
		return (NULL);
    }
    for (tmp = node; tmp; tmp = tmp->next)
		if (strcmp(tmp->key, key) == 0) {
			return (tmp->value);
        }
	return (NULL);
}