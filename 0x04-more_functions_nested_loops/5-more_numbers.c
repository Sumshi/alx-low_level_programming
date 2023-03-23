i#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0-14
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;/*for loop 10 times*/
	int j;/*to print 0-14*/

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');/*since all numbers after 10 begin with 1*/
			_putchar(j % 10 + '0');/*to get the second number*/
		}
	_putchar('\n');

	}
}

