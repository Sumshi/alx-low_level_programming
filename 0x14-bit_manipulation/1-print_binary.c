#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{/*it recursively prints binary one bit at a time*/
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
