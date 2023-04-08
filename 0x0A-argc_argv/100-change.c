#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);/*stores the value in cent variable*/
	if (cents < 0)/*negative*/
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		cents = cents - 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents = cents - 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents = cents - 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents = cents - 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents = cents - 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
/*cents will store the amount of cents that needs to be converted into coins*/
/*coins will store the total number of coins required*/
