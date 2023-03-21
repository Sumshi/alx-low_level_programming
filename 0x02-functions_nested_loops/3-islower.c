#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c : parameter to be checked
 * Return: 1 if it is lowercase and 0 if not
 */
int _islower(int c)
{
/*used ASCII values for lowercase from a-z, represented by 97-122 in decimal*/
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
