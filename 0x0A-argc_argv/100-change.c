#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg num
 * @argv: array of arguments
 * Return: value of return
 */
int main(int argc, char *argv[])
{
	int number, a, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	res = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (a = 0; a < 5 && number >= 0; a++)
	{
		while (number >= coins[a])
		{
			res++;
			number -= coins[a];
		}
	}
	printf("%d\n", res);
	return (0);
}

