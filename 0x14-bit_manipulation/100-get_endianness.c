#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char *) &x;/*points to first byte of x*/
 /* If little endian, least significant byte will be stored first */
	if (*c)
	{
		return (1);/*Little endian*/
	}
	else
	{
		return (0);/*Big endian*/
	}
}
