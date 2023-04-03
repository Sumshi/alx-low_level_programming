#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input
 * @size: size of each side of the square matrix.
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)

{	int i;
	int sum1 = 0;
	int sum2 = 0;


	/*calculate the sum of the first diagonal*/
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 +  *(a + i * size + i);
	}

	/*calculate the sum of the second diagonal*/
	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
