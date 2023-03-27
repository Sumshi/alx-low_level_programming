#include "main.h"
/**
 *_strcpy - copies a string
 * @dest: destination array
 * @src: source array
 * Return: copied string(dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;/*for iteretaion*/

		if (dest == NULL)/*means no destination is provided*/
			return (NULL);
	for (i = 0; src[i] != 0; i++)/*it will iterate through all elements in src*/
		dest[i] = src[i];/*for each iteration made by src will be strored in dest*/
	return (dest);
}
