#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array:  is a pointer to the first element of the array to search
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;/*variable for iterating through the elements*/

	if (array == NULL)
	{
		return (-1);
	}
	/*iterate through the array sequentially*/
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);/*returns index where value is localed*/
		}
	}
	/*value not found in the array, return -1*/
	return (-1);
}
