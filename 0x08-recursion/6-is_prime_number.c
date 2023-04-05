#include "main.h"
/**
 * check - checks to see if number is prime
 * @a:para 1
 * @b:para 2
 * Return:int
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - states if number is prime
 * @n:parameter
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)/*is prime*/
	{
		return (1);
	}
	else if (n <= 1)/*prime no starts from 2*/
	{
	return (0);
	}
	return (check(2, n));
}
