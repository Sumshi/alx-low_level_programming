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
	unsigned int i; /*stores s1 string length*/
	unsigned int j; /*stores s2 string length*/

	if (s1 == NULL)
	{
		s1 = ""; /*treated as empty string if null is passed*/
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*gettin string lengths for s1 and s2*/
	i = strlen(s1);
	j = strlen(s2);
	/*If n is greater or equal to the length of s2 then use the entire string s2*/
	if (n >= j)
	{
		n = j;
	}
	
	ptr = malloc(sizeof(char) * (n + i + 1));
	if (ptr == NULL)
	{
		return (NULL); /*malloc fails return*/
	}
	/*strcat has only 2 arguments, source and destination*/
	strcpy(ptr, s1); /*copies s1 to ptr*/
	/*strncat takes 3 arguments source,dest and maximum no of bytes*/
	strncat(ptr, s2, n);

	return (ptr);
}
