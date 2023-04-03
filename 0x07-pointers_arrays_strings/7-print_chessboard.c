#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *@a: pointer
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{/*2D chessboard with 8rows and 8columns*/
	int i;/*for row iteration*/
	int j;/*for column iteration*/

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
