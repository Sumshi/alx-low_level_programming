#include "main.h"
/**
 * is_prime_number - checks for prime number
 *@n: parameter
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)/*not a prime number*/
		return (0);

	for (i = 2; i < n; i++)/*prime num starts from 2*/
	{
		if (n % i == 0)/*not all prime numbers are divisible by 2*/
			return (0);
	}

	return (1);
}

