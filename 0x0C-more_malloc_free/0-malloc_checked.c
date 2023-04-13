#include "main.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b: function parameter
 *Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;/*allocated memory pointer*/

	ptr = malloc(b);/*no sizeof cz it is void*/

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
