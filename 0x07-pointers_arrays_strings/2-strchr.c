#include "main.h"
/**
 * _strchr - returns the first occurence of a character
 *@s: pointer
 *@c: character to be located
 * Return: returns s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
/*(s + i) the function is returning a pointer to the memory*/
/*location of the first occurrence of the character*/
		}
	}
	return (NULL);
}
