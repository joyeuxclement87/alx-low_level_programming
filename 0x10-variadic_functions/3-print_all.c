#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function for printing all
 * @format:argumrnt list
 */
void print_all(const char *const format, ...)
{
	int a = 0;
	char *string, *sepr = "";

	va_list lst;

	va_start(lst, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
			case 'c':
				printf("%s%c", sepr, va_arg(lst, int));
				break;
			case 'i':
				printf("%s%d", sepr, va_arg(lst, int));
				break;
			case 'f':
				printf("%s%f", sepr, va_arg(lst, double));
				break;
			case 's':
				string = va_arg(lst, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", sepr, string);
				break;
			default:
				a++;
				continue;
			}
			sepr = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(lst);
}
