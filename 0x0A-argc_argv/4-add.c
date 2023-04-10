#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>/*atoi function library*/
/**
 * main - adds positive numbers.
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);

		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
