#include<stdio.h>
#include<stdlib.h>/*atoi function library*/
/**
 * main - multiplies 2 numbers
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{/*atoi function converts a string to integer*/
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);/*convert first argument to integer*/
	num2 = atoi(argv[2]);/*convert second argument to integer*/
	printf("%d\n", num1 * num2);
	return (0);
}
