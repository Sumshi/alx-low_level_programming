#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0;
	int len = 1;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len += 1;
		len += 1;
	}
	str = malloc(sizeof(char) * len);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	str[c] = '\0';
	if (str != NULL)
		return (str);
	else
		return (NULL);
}
