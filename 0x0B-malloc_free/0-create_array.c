#include "main.h"
#include <stddef.h>
#include<stdlib.h>
/**
 * create_array - creates array of chars
 *@size: size of the array
 * @c: initialized char value
 *Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
