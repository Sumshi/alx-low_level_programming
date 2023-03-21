#include "main.h"
/**
 * print_sign - prints the sign
 * @n: parameter to be checked
 * Return: 1,0 and -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}

}
