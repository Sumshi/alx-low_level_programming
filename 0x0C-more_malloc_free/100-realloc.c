#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes allocated for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;/*new memory*/

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size <= old_size)
	{
		return (ptr);/*returns pointer to previous memory*/
	}

	new_ptr = malloc(new_size);/*allocates memory for new_ptr*/

	if (new_ptr == NULL)
	{
		return (NULL);/*means allocation was unsuccessful*/
	}

	memcpy(new_ptr, ptr, old_size);/*copies data old memory to new one*/
/*ptr points to old memory block*/
	free(ptr);

	return (new_ptr);
}
