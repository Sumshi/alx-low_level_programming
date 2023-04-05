#include "main.h"
#include <string.h>
/**
 * is_palindrome - this function check if the string is palindrom
 * @s: string
 * Return: return 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome(s, 0, len - 1));
}
/**
 * palindrome -this function help
 * @s: string pointer
 * @left: first character
 * @right: last character
 * Return: return
 */
int palindrome(char *s, int left, int right)
{/*left=first character in string, right = last character*/
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] ==  s[right])
	{
		return (palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}
