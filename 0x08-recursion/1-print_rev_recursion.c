#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 *@s: parameter
 * Return: Always 0.
 */
	void _print_rev_recursion(char *s)
{	if (*s)
	{
		_print_rev_recursion(s + 1);/*calls itself in reverse*/
		_putchar(*s);
	}
}
