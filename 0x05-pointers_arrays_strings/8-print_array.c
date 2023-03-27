#include "main.h"
#include<stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: parameter 1
 * @n: parameter 2.
 */
void print_array(int *a, int n)
{
	int i;/*for iterating no of loop*/
	/*n is the number of elements in the array*/

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)/*refers to the last element*/
			printf("%d, ", a[i]);/*prints number comma and space*/
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
