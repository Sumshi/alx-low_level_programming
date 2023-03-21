#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
int i;/*this is for the 10 times loop, outer loop*/
char j;/*this is for the alphabets in lowercase*/

for (i = 0 ; i < 10 ; i++)
{
for (j = 'a' ; j <= 'z' ; j++)
_putchar(j);
_putchar('\n');
}

}
