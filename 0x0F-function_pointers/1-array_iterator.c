#include "function_pointers.h"
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes function of elements of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	 unsigned int i;/*for iterating array elements*/

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);/*calling function action and passing array elements*/
	}
}
