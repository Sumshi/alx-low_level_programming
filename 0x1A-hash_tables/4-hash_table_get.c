#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: ht is the hash table you want to look into
 * @key: key is the key you are looking for
 * Return: the value associated with element or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/*calculate the index of the key in the hash table*/
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		return (NULL);/*means no element at that index*/
	}
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{/*if a matching key is found, it returns its value*/
			return (node->value);
		}
		else
		{/*if not a matching key it goes to the next node*/
			node = node->next;
		}
	}
	return (NULL);/*means that the key could not be found*/
}
