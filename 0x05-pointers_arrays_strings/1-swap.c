#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: parameter 1
 * @b: parameter 2
 */
void swap_int(int *a, int *b)
{
	int temp;/*to store the original value so that it cannot be overwritten*/

	temp = *a;/*stores the original value of a*/
	*a = *b;/*value of a = value of b*/
	*b = temp;/*b takes value of temp which is value of a*/
}
