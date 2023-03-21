#include "main.h"
/**
 * jack_bauer - prints 24hr time
 * Return: always 0
 *
 */
void jack_bauer(void)
{
int i;/*prints the hour*/
int j;/*prints the minute*/

for (i = 0 ; i < 24 ; i++)
{
for (j = 0 ; j < 60 ; j++)
{
_putchar(i / 10 + '0');/*to get the first number of the hr*/
_putchar(i % 10 + '0');/*to get the last number of the hr*/
_putchar(':');
_putchar(j / 10 + '0');/*to get the first number of the min*/
_putchar(j % 10 + '0');/*to get the last number of the min*/
_putchar('\n');
}
}
}
