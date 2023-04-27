#include <stdio.h>
/**
 * before_main - function is executed before main
 * Return: Always 0
 */
/*This implementation uses a GCC attribute called constructor to*/
/*specify that the function should be executed before the main() function*/

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
