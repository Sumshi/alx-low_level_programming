#include "main.h"
/**
 * array_range -  creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size;/*size of array elements*/
	int i;/*array elements*/

	size = max - min + 1;/*plus one for endpoint cz it is range*/

	ptr = malloc(sizeof(int) * size);/*allocates memory for the array*/

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;/*increments it till it is <=max*/
	}
	return (ptr);
}
