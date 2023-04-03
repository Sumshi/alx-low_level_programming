#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *@s: pointer to the memory block to be filled
 *@b: value to fill
 *@n: number of bytes to set
 * Return: pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
