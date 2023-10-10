#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in an array
 * @value: the value to search for
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, l, h;/*l = low, h = high*/

	if (array == NULL)
		return (-1);
	/*initialize first and last elements of the array*/
	for (l = 0, h = size - 1; h >= l;)
	{/*interpolation formula to calculate the estimated position*/
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos < size)/*value within range*/
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			h = pos - 1;
		else
			l = pos + 1;
	}

	return (-1);
}
