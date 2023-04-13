#include "main.h"
/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: array of elements(number of elements)
 * @size:elements size bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;/*pointer to allocate memory for*/

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);/*allocates memory for the array*/

	if (ptr == NULL)
	{
		return (NULL);
	}
/*sets the nmemb * size bytes of memory pointed  by ptr to 0*/
	memset(ptr, 0, nmemb * size);/*memory is set to zero*/

	return (ptr);
}
/* function allocates memory for an array, initializes it to 0*/
/*returns a pointer to the allocated memory */
/*It checks for errors and returns NULL if any errors occur*/
