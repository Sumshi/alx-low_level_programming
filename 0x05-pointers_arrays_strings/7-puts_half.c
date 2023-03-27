#include "main.h"
/**
 * puts_half -  prints half of a string
 *@str: parameter to be checked
 */
void puts_half(char *str)
{
	int i;/*for iterarion*/
	int length = 0;/*to store string length*/

	/*get the length of string first*/
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if (length % 2 == 0)/*for even length of string*/
	{
		for (i = length / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (length % 2 != 0)/*for odd length of string*/
	{
		for (i = (length - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
