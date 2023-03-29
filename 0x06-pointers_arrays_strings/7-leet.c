#include "main.h"
/**
 * leet - encodes a string into 1337
 *@str: function parameter
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i;
	int j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

		for (i = 0; str[i] != '\0'; i++)/*iterates over characters passes*/
		{
			for (j = 0; a[j] != '\0'; j++)
			{
				if (str[i] == a[j])
					str[i] = b[j];/*replaces a[i] values*/
			}
		}
	return (str);
}
