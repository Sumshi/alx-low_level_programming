#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, unsigned int);
	}

	va_end(list);
	return (sum);
}
