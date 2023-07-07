#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;/*creates a new hash table*/
	unsigned long int i;

	/*allocate memory for new hash table*/
	hash_table = malloc(sizeof(hash_table_t));
	/*check if memory allocation was successful*/
	if (hash_table == NULL)
	{
		return (NULL);
	}
	/*allocate memory for the array within hash node*/
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	/*check if array memory allocation was successful*/
	if (hash_table->array == NULL)
	{
		free(hash_table);/*fress previous memory*/
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	hash_table->size = size;
	return (hash_table);
}
