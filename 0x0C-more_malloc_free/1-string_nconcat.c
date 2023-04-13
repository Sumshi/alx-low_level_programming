#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;/*stores concatinated string*/
	unsigned int i;/*iterates over s1*/
	unsigned int j;/*iterates over s2*/
	unsigned int len1 = 0; /*stores s1 string length*/
	unsigned int len2 = 0; /*stores s2 string length*/

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	/*plus 1 for null byte*/

	if (ptr == NULL)
	{
		return (NULL);/*malloc fails return*/
	}
	if (s1 == NULL)
	{
		s1 = "";/*treated as empty string if null is passed*/
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*gettin string lengths for s1 and s2*/

	len1 = strlen(s1);
	len2 = strlen(s2);

	/*If n is greater or equal to the length of s2 then use the entire string s2*/
	if (n >= len2)
	{
		n = len2;
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];/*copies s1 to ptr*/
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];/* append n bytes of s2 to ptr */
	}
	/*appends at most n characters from s2 to the end of ptr*/
	ptr[i] = '\0';

	return (ptr);
}
