#include "main.h"
/**
 * _pow_recursion - gets power
 *@x: base
 *@y: exponent
 * Return: -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
/*is same as x^y = x * x^(y-1)*/
	}
/* x is base, exponent is y - 1*/
}
