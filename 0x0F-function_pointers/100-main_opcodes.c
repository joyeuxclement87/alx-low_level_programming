#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry points
 * @argc: num of args
 * @argv: array of args
 * Return: o the return
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	a = 0;
	while (a < bytes)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", array[a]);
			break;
		}
		printf("%02hhx ", array[a]);
		a++;
	}
	return (0);
}
