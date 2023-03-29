#include "main.h"
/**
 * rot13 -  encodes a string using rot13.
 *@str: function parameter
 * Return: Always 0.
 */
char *rot13(char *str)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";/*input*/
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";/*output*/

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)/*26x 2 alphabets both upper and lower*/
		{
			if (a[j] == str[i])
			{
				str[i] = b[j];/*encodes it*/
				break;
			}
		}
	}
	return (str);
}
