#include <math.h>
#include "search_algos.h"

/**
 * jump_search - search for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;/*for iterating through the array*/
	size_t step = sqrt(size);/*steps to skip*/
	size_t prev_index = 0;

	if (array == NULL || size == 0)
		return (-1);

	/* Handle invalid input */
	while (prev_index < size && array[prev_index] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		i = prev_index;
		prev_index += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev_index);

	/*check if prev index goes beyond the ssize*/
	if (prev_index >= size - 1)
		prev_index = size - 1;

	while (i < prev_index && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)/*target value has been found*/
		return (i);
	else
		return (-1);
}
