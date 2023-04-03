#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *@s: pointer to the memory block to be filled
 *@b: value to fill
 *@n: number of bytes to fill
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
/*we are filling n bytes of memory pointed by s with constant b*/
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
