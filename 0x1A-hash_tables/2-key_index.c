#include "hash_tables.h"
/**
 * key_index -  gives you the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/*call hash_djb2 to calculate hash value for given key*/
	hash_value = hash_djb2(key);
	/*calculate the index at which key value should be stored*/
	index = hash_value % size;
	return (index);
}
