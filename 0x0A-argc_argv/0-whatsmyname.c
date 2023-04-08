#include<stdio.h>
/**
 * main - prints program  name
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)/*shows that there is one argument*/
		printf("%s\n", *argv);
	return (0);
}
