#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - entry point for prints name
 * @name: name to be printed
 * @f: tfunction pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
