#include "main.h"
#include <stddef.h>
#include<stdlib.h>
/**
 * str_concat - concatinates two strings
 *@s1: string parameter1
 *@s2: string parameter 2
 *Return: pointer to the array, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{

	char *concatinated_str;
	int index, concatinated_index = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		length++;

	concatinated_str = malloc(sizeof(char) * length);

	if (concatinated_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concatinated_str[concatinated_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concatinated_str[concatinated_index++] = s2[index];

	return (concatinated_str);
}
