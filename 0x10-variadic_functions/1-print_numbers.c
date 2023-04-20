#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers to print
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i < n - 1)/*check if the current integer is the last one*/
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
