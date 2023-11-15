#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function to reverse str
 * @s: a str to be used
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
