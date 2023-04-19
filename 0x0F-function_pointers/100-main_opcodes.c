#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes;/*holds number of bytes to print*/
	int i;/*for iterating*/
	char *arr;/*pointer to the first byte*/

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	bytes = atoi(argv[1]);/*converting froom string to integer*/

	if (bytes < 0)/*means negative*/
	{
		printf("Error\n");
		exit(2);
	}
	/*arr variable is set to the address of the main function*/

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)/*last byte*/
		{
			/*print the byte as a two-digit hexadecimal number with leading zeroes*/
			/*hh treats bytes as unsigned char*/
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
