#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *@s: string parameter
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
	/*moves to next character(s + 1) and adds 1 for the null byte*/
}
