#include<stdio.h>
#include<stdlib.h>
#include "main.h"
#include<ctype.h>
/**
 * main - multiplies 2 positive  numbers
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	unsigned int num1;
	unsigned int num2;
	long int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = (long int) num1 * num2;
	 printf("%ld\n", product);
	return (0);
}
