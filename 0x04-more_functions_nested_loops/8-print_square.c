#include "main.h"
/**
 * print_square - prints a square
 * @size: prints size of square
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		int i;/*for row iteration*/
		int j;/*for column iteration*/

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				_putchar('#');
			}
		_putchar('\n');/*needs to be at the outer loop*/
		}
	}
}
