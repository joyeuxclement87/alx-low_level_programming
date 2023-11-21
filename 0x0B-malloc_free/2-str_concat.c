
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - str for concat
 * @s1: input one
 * @s2: input two
 * Return: one of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int a, ko;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ko = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ko] != '\0')
		ko++;
	concat = malloc(sizeof(char) * (a + ko + 1));

	if (concat == NULL)
		return (NULL);
	a = ko = 0;
	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}

	while (s2[ko] != '\0')
	{
		concat[a] = s2[ko];
		a++, ko++;
	}
	concat[a] = '\0';
	return (concat);
}
