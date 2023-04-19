#include "3-calc.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
/**
 * op_add - adds two numbers
 * @a: para1
 * @b: para2
 * Return: sum of two number
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: para1
 * @b: para2
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - adds two numbers
 * @a: para1
 * @b: para2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: para1
 * @b: para2
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -  two numbers
 * @a: para1
 * @b: para2
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
