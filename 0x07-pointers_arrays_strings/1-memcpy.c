#include "main.h"
/**
 * _memcpy - copies memory area
 *@src: source memory
 *@dest: destination memory
 *@n: number of bytes to be copied
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];/*copies n bytes from src to dest*/
	}
	return (dest);
}
