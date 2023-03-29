#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *@str: parameter to be checked
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)/*u can still use a - z*/
			str[i] = str[i] - 32;
		/*97 -32 will give u 65 which is A*/
	}
	return (str);
}
