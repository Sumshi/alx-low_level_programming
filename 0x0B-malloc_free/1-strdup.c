#include<stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: function parameter
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *ptr; /* stores copied string */
	int length = 0;/* stores string length */
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	/* calculate the length of the string */
	for (i = 0; str[i]; i++)
	{
		length++;
	}
	/* allocate memory for the duplicated string */
	ptr = malloc((sizeof(char) * length) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	/* copy the string */
	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}

	ptr[length] = '\0'; /* add the null terminator */
	return (ptr);
}
