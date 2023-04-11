#include "main.h"
#include <stddef.h>
#include<string.h>
#include<stdlib.h>
/**
 *_strdup - duplicates a string
 *@str: function parameter
 *Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *new_str;/* stores copied string*/
	int length;/*stores string length*/
	int i;

	if (new_str == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; str++)/*increments tsring length*/

		new_str = malloc((length * sizeof(char)) + 1);
			/*plus 1 for the null terminator*/
			for (i = 0; str[i] != '\0'; i++)
			{
				new_str[i] = str[i];/*copies str string*/
			}
	new_str[i] = '\0';
	return (new_str);
}
