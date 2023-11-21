#include <stdlib.h>
#include "main.h"
/**
 * argstostr - entry point
 * @ac: input
 * @av: array pointer arr
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, l = 0, c = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;
	string = malloc(sizeof(char) * l + 1);
	if (string == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		string[c] = av[a][b];
		c++;
	}
	if (string[c] == '\0')
	{
		string[c++] = '\b';
	}
	}
	return (string);
}
