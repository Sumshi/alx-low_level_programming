#include "main.h"
/**
 * check - checks if a is squareroot of b
 * @a:parameter 1
 * @b: parameter 2
 *
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)/*if square of a is equal to b*/
	{
		return (a);/*a is squareroot of b*/
	}
	else if (a * a > b)
	{
		return (-1);
	}
	else
	{
		return (check(a + 1, b));/*functions calls itself recursively*/
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (check(1, n));
	}
}
