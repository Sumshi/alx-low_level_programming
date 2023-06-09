#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add or update
 * @key:  is the key. key can not be an empty string
 * @value: value is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;/*will have the key and value*/
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);/*duplicates the value string*/
	if (value_copy == NULL)/*if duplication fails*/
		return (0);

	/*calculate the index of the key*/
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{/*checks if the key already exists*/
		if (strcmp(ht->array[i]->key, key) == 0)
		{/*if matching key is found*/
			free(ht->array[i]->value);/*frees the existing value*/
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)/*memory allocation failed*/
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)/*if key duplication fails*/
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
