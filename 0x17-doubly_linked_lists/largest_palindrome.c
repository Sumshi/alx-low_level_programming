#include <stdio.h>
/**
 * is_palindrome - Checks if a number is a palindrome.
 * @number: The number to check.
 *
 * Return: 1 if the number is a palindrome, 0 otherwise.
 */
int is_palindrome(int number)
{
	int reversed = 0;
	int original = number;

	while (number != 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}
	return (original == reversed);
}
/**
 * find_largest_palindrome - Finds the largest palindrome made from the
 *                          product of two 3-digit numbers.
 * Return: The largest palindrome found.
 */
int find_largest_palindrome(void)
{
	int largest_palindrome = 0;
	int i, j;

	for (i = 999; i >= 100; i--)
	{
		for (j = i; j >= 100; j--)
		{
			int product = i * j;

			if (product < largest_palindrome)
			{
				break;
			}
			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}
	return (largest_palindrome);
}
/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	int largest_palindrome = find_largest_palindrome();

	/* Save the result in the file "102-result" */
	FILE *file = fopen("102-result", "w");

	if (file != NULL)
	{
		fprintf(file, "%d", largest_palindrome);
		fclose(file);
	}
	return (0);
}
