#include "main.h"
/**
 * _strncat - concatinates two strings
 *@dest: string destination
 *@src: source string
 *@n: number of characters to be appended (bytes)
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{/*n an integer that specifies the maximum number of*/
/*bytes to be concatenated from src*/
	int i;/*for iterating the length*/
	int dest_length = 0;
	int src_length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_length++;/*gets dest string length*/
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		src_length++;/*gets src string length*/
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
/*checks if current character in src is not the null terminator \0*/
	{
		dest[dest_length + i] = src[i];/*Assign the current character in src */
/*to the corresponding position in dest*/
/*The position in dest is calculated by adding*/
/*the length of dest to the current value of i*/
	}
		return (dest);
}
