#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function for making recursioi
 * @s : value for str
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
}
