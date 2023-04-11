#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatinates a string
 * @s1: source string
 * @s2: destination string
 * Return: pointer to the allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int i;/*for s1 iteration*/
	int j;/*for s2 iteration*/
	char *ptr;/*stores concatinated string*/

	if (s1 == NULL)
	{
		s1 = "";/*if null sets it to empty string*/
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/*allocating memory for concatinated string*/

	ptr = malloc(strlen(s1) + strlen(s2) + 1);/*+1 for null*/

	if (ptr == NULL)
	{
		return (NULL);/*mallocs return*/
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		/*copies to ptr until it reaches null*/
		ptr[i] = s1[i];

	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i + j] = s2[j];/*not modifying s1*/
	}
	ptr[i + j] = '\0';/*stops copying when null is reached*/
	return (ptr);
}
