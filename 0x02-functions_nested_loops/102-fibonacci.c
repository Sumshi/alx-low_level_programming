#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned long j = 0, k = 1, sum;/*j and k are the first 2 */

	for (i = 0 ; i < 50 ; i++)
	{
		sum = j + k;
		printf("%lu", sum);
		j = k;
		k = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
