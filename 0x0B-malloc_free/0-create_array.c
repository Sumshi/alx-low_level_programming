#include "main.h"
#include <stddef.h>
#include<stdlib.h>
/**
 * create_array - creates array of chars
 *@size: size of the array
 * @c: initialized char value
 *Return: pointer to the array, or NULL if it fails
 */
/*creates space in heap memory and fills it with character c*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));/*allocating space*/

	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;/*assigns c to space allocated*/
	}
	return (array);
}
