#include "main.h"
/**
 * _strncpy -  copies a string
 *@dest: destination string
 *@src: source string
 *@n: number of characters to be copied into dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int dest_length = 0;
	int src_length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		src_length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
/*If src has fewer than n characters*/
/*fill the remaining bytes with null terminators*/
	for (; i < n; i++)/*; means that the first part is empty*/
	{
		dest[i] = '\0';
	}
	return (dest);
}
