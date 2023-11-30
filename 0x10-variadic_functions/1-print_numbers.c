#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers -functio to print numbers
 * @separator: str to be printed btn num
 * @n: the num the intager
 * @...:a var to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int indx;

	va_start(numbers, n);
	indx = 0;
	while (indx < n)
	{
		printf("%d", va_arg(numbers, int));

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
		indx++;
	}
	printf("\n");
	va_end(numbers);
}
