#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - function str concat
 * @s1:str to append to
 * @s2: str to append from to
 * @n: unsigned int
 * Return: the value to be returned
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int ln1;
	unsigned int ln2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	ln1 = strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
	}
	ln2 = strlen(s2);
	if (n >= ln2)
	{
		n = ln2;
	}
	new_string = malloc((ln1 + n + 1) * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	strncpy(new_string, s1, ln1);
	strncpy(new_string + ln1, s2, n);
	new_string[ln1 + n] = '\0';
	return (new_string);
}
