#include "main.h"
#include <stdio.h>

/**
 * _atoi -a str to an int
 * @s: converted str
 * Return: value to be rerutned
 */
int _atoi(char *str)
{
	int a, b, c, ln, f, dgt;

	a = 0;
	b = 0;
	c = 0;
	ln = 0;
	f = 0;
	dgt = 0;

	while (str[ln] != '\0')
		ln++;

	while (a < ln && f == 0)
	{
		if (str[a] == '-')
			++b;

		if (str[a] >= '0' && str[a] <= '9')
		{
			dgt = str[a] - '0';
			if (b % 2)
				dgt = -dgt;
			c =c * 10 + dgt;
			f = 1;
			if (str[a + 1] < '0' || str[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (c);
}

/**
 * main - entry poitn
 * @argc: argument num
 * @argv: arg array str
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, nm1, nm2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nm1 = _atoi(argv[1]);
	nm2 = _atoi(argv[2]);
	res = nm1 * nm2;

	printf("%d\n", res);

	return (0);
}

