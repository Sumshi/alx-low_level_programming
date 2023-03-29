#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i;/*for looping*/
	int temp; /*to hold original value b4 swapping*/

	for (i = 0; i < n / 2; i++)/*divide so that we can swap*/
	{
		temp = a[i];/*holds original value of a[i]*/
		a[i] = a[n - 1 - i];/*a[i] holds the second last element*/
		a[n - 1 - i] = temp;
	}
}
/* the index of last element = n-1 */
