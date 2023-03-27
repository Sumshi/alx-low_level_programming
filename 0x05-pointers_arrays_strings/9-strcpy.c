#include "main.h"
/**
 *_strcpy - copies a string
 * @dest: destination array
 * @src: source array
 * Return: copied string(dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
