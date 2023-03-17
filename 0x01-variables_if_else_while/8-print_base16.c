#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;/*to print numbers from 0 to 9*/
	char j;/*to print alphabets from a to f*/

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
