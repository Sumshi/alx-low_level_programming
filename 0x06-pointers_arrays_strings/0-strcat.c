#include "main.h"
/**
 * _strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;/*for iterating string length*/
	int dest_length = 0;
	int src_length = 0;

	for (i = 0; dest[i] != '\0'; i++)/*gets string length for dest*/
	{
		dest_length++;
	}
	for (i = 0; src[i] != '\0'; i++)/*gets string length for src*/
	{
		src_length++;
	}
	for (i = 0; i <= src_length; i++)
	{
		dest[dest_length + i] = src[i];/*we are appending src to the last element*/
		/*last element is dest_length +i */
	}
		return (dest);
}
