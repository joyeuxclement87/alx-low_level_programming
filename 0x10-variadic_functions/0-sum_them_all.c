#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all
 * @n: num for parameters
 * @...: number of variable
 * Return: the return value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int a, sum = 0;

	va_start(par, n);
	a = 0;
	while (a < n)
	{
		sum += va_arg(par, int);
		a++;
	}
	va_end(par);
	return (sum);
}
