#include "main.h"
/**
 * print_number -  prints an integer
 *@n: function parameter
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
/*This checks if the input integer is negative*/
/*If it is, the '-' character is printed using _putchar function*/
/*and the input integer n is converted to its absolute value by negating it*/
