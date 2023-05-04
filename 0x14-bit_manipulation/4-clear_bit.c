#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: bit
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* Create a mask with a 1 bit at the index position */
	mask = 1UL << index;

	/* Invert the mask to create a 0 bit at the index position */
	mask = ~mask;

	/* Set the bit at the index position to 0 */
	*n &= mask;

	return (1);
}
