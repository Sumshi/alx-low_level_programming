#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 *@s: string parameter
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);/*calls itself in reverse*/
		_putchar(*s);
/*(s + 1)moves pointer to the next character, till '\0'*/
	}
}
