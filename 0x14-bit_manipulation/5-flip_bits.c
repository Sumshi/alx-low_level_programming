#include "main.h"
/**
 * flip_bits - flip bits to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	/* Count the number of set bits in the XOR result */
	while (xor_result > 0)
	{
		if (xor_result & 1)
		{
			bit_count++;
		}
		xor_result >>= 1;
	}

	return (bit_count);
}
