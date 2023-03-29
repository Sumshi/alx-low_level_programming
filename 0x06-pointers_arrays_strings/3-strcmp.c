#include "main.h"
/**
 * _strcmp - compares two strings.
 *@s1: string 1
 *@s2: string 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;/*for iterating*/

	/*length of the string differs*/
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])/*if equal moves to next*/
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
		}
		else
			return (0);/*satisfies when s1[i] = s2[i]*/
	}
	return (0);
}
