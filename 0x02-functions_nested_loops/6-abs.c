#include "main.h"
/**
 * _abs - checks the absolute value of an integer
 * @i: parameter to be checked
 * Return: always i
 */
int _abs(int i)
{
/*i is passed into the parameter, any value can be passed*/
/*absolute value of a number is the positive value of that number*/
if (i < 0)/*this means i is negative*/
i = -(i);/* negative X negative will return positive value*/
else if (i > 0)/* means i is positive hence no need to change*/
i = i;
return (i);
}
