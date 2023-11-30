#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - entry point to be printed
 * @separator: to be printed btn strng
 * @n: num to str
 * @...: str num to printed
 * Description: separated if is null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *string;
	unsigned int indx;

	va_start(strs, n);
	indx = 0;
	while (indx < n)
	{
		string = va_arg(strs, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
		indx++;
	}
	printf("\n");
	va_end(strs);
}
