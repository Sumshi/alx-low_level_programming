#include "main.h"
/**
 * _isalpha - checks for alphabets both upper and lowercase
 * @c: parameter to be checked
 * Return: 1 if alphabet 0 otherwise
 */
int _isalpha(int c)
{
/*using ASCII for a-z is represented as 97-122 in decimal*/
/*ASCII for A-Z is represented as 65-90 in decimal*/
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
