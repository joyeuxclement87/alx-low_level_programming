#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_num - to check strn
 * @str: array str
 * Return: value to be return
 */

int check_num(char *str)
{
	unsigned int counting;

	counting = 0;
	while (counting < strlen(str))

	{
		if (!isdigit(str[counting]))
		{
			return (0);
		}
		counting++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: arguments count
 * @argv: Argument arr str
 * Return: value to be returned
 */

int main(int argc, char *argv[])

{

	int counting;
	int sum = 0;
	int str_int;

	counting = 1;

	while (counting < argc)
	{
		if (check_num(argv[counting]))

		{
			str_int = atoi(argv[counting]);
			sum += str_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		counting++;
	}
	printf("%d\n", sum);

	return (0);
}
