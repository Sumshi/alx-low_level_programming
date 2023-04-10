#include<stdio.h>
#include<stdlib.h>/*atoi function library*/
/**
 * main - adds positive numbers.
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{/*atoi function converts a string to integer*/
	int i;/*iterates over command arguments*/
	int j;/*iterates over characters*/
	int sum = 0;/*hold sum of numbers*/

	for (i = 1; i < argc; i++)/*we start with 1 cz 0 holds program name*/
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')/*means not digit*/
			{
				printf("Error\n");
				return (1);

			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
