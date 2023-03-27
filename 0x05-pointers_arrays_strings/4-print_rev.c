#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: function parameter
 */
void print_rev(char *s)
{
	/*first we need to know the length of the string*/
	int i;/*for iterating the string*/
	int length = 0;/*stores the length of the string*/

	for (i = 0; s[i] != '\0'; i++)

		length++;

	for (i = length - 1; i >= 0; i--)/*decrements the length hence reverse order*/

		_putchar(s[i]);

	_putchar('\n');
}
