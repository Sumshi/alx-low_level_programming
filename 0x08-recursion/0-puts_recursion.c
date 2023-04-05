#include "main.h"
/**
 * _puts_recursion - function that prints a string
 *@s: parameter
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{	_putchar(*s);/*prints current character*/
		_puts_recursion(s + 1);/*calls itself with next character*/
	}
	else
	{
		_putchar('\n');
	}
}
