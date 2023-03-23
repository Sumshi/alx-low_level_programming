#include "main.h"
/**
 * print_line - prints a line
 * @n: parameter to be checked
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;/*to iterate for the line*/

	if (n <= 0)

	{
		_putchar('\n');
	}
	else

	{

		for (i = 1 ; i <= n ; i++)

		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
