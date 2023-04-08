#include<stdio.h>
/**
 * main - prints number of arguments passed
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{/*argc - 1 because the first element is program name*/
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
