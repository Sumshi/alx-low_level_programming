#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: string to search for
 *@accept: set of characters we want to search for
 * Return: length (number of bytes in the initial segment)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;/*keeps track of initial segement of s*/
	unsigned int i;/*iterates over s*/
	unsigned int j;/*iterates over accept*/

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;/*length is incremented if match is found*/
				break;
			}
			if (accept[j + 1] == '\0')/*end of accept is reached*/
			{
			return (length);
			}
		}
	}
	return (length);
}
