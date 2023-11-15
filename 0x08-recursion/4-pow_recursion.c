#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - the fumction the funct
 *@x: value num to use
 *@y: value to use
 *Return: value to be returned
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));

}
