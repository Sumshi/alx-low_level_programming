#include <stdio.h>
#include<math.h>
#include "search_algos.h"
/**
 * min - returns the smaller value between 2 elements
 * @a: value 1
 * @b: value 2
 * Return: returns the smaller value between 2 elements
 */
size_t min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array:  is a pointer to the first element of the array to search
 * @size:  is the number of elements in the array
 * @value:  is the value to search for
 * Return: the index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size); /* number of steps to skip */
    size_t prev = 0;

    if (array == NULL || size == 0)
        return (-1);

    /* check the block where value might be located */
    while (array[min(step, size - 1)] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", min(step, size - 1), array[min(step, size - 1)]);
        prev = step;
        step += sqrt(size);

        /* if prev value exceeds the length of the array, return -1 */
        if (prev >= size)
        {
            printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
            return (-1);
        }
    }

    /* doing linear search for the block */
    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev++;

        /* check if the element is not in the block */
        if (prev == min(step, size))
        {
            printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
            return (-1);
        }
    }

    /* if the target is found */
    if (array[prev] == value)
    {
        printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
        return (prev);
    }

    /* if the target is not there */
    return (-1);
}
