#include <stdio.h>
/**
 *main - entry point
 *
 * Return: always (0)
 */
int main(void)
{
int num1 = 1;
int num2 = 2;
int sum = 0;

while (num2 <= 4000000)
{
if (num2 % 2 == 0)
{
sum += num2;
}

int next = num1 + num2;
num1 = num2;
num2 = next;
}

printf("%d\n", sum);
return (0);
}
