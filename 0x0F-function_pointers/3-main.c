#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - prints results of operation
 *@argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1;
	int num2;
	char *op;

	/*if the number of arguments is wrong, print Error and exit 98*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/*if the operator is none of the above, print Error then exit with 99*/
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	/*if the user tries to divide (/ or %) by 0, print Error the exit 100*/
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
