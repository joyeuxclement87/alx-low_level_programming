#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplication of new mem alloc
 * @str: char str
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new;
	int a, l = 0;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
	a++;

	new = malloc(sizeof(char) * (a + 1));

	if (new == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		new[l] = str[l];

	return (new);
}
