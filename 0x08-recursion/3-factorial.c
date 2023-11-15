#include <stdio.h>
#include "main.h"

/**
 * factorial - funtion number to be used
 * @n : number
 * Return: value to ber returned
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
