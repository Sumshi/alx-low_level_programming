#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *@s:  first occurrence in the string
 *@accept: matches any of the bytes in the string s
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;/*iterates over s*/
	int j;/*iterates over accept*/

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
