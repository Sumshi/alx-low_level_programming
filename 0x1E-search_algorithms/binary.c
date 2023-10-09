#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search -  searches for a value in a sorted array of integers
 * @array:  is a pointer to the first element of the array to search
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right = size - 1;
	size_t i;

	/*left = start, right = end, mid = middle element*/
	if (array == NULL)
	{
		return (-1);
	}
	/*loop continous as long as left is less than right*/
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
