#include "variadic_functions.h"
/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int comma;
	char *str;
	va_list a_list;

	va_start(a_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				comma = 1;/*comma true*/
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				comma = 1;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				comma = 1;
				break;
			case 's':
				str = va_arg(a_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				comma = 1;
				break;
			default:
				comma = 0;/*no comma*/
				break;
		}
		if (format[i + 1] != '\0' && comma == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a_list);
}
