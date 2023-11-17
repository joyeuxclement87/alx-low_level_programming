#include "main.h"
#include <stdio.h>

/**
 * main - the entr point
 * @argc: argument number
 * @argv: array argumrnt
 * Return: the value for return
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}

