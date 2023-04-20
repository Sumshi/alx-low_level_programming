#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;/*for string*/

	va_start(list, n);

	for (i = 0; i < n; i++)
	{

		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
/*print the separator string between the strings,not after the last string*/
		if (separator != NULL && i != n - 1)/*means not last string*/
			printf("%s", separator);

	}
	printf("\n");
	va_end(list);
}
