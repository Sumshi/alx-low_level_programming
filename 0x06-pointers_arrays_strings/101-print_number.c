#include "main.h"
/**
 * print_number -  prints an integer
 *@n: function parameter
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)/*negative number*/
	{
		_putchar('-');
		n = -n;/*converted to positive*/
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
/*This checks if the input integer is negative*/
/*If it is, the '-' character is printed using _putchar function*/
/*and the input integer n is converted to its absolute value by negating it*/
