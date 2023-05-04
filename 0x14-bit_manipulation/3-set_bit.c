#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: unsigned int pointer n
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{/*mask stores the bitmask used to set the desired bit*/
	unsigned long int mask;

/*checks if index is within the range of unsigned int bit*/
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);/*Error index out of range*/
	}
	mask = 1UL << index;
	*n |= mask;

	return (1);/*Success*/
}
