#include "main.h"
/**
 * _strstr - locates a substring.
 *@haystack: pointer to the string to search
 *@needle: substring to search for
 * Return: pointer to the beginning of the located substring
 *or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)

	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
