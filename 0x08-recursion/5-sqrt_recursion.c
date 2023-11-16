#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the num for sqr
 * @n: sqr num
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - to find natural of sqrt
 * @n: num to creat root
 * @i: iterator
 * Return: thesquare root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (actual_sqrt_recursion(n, i + 1));
}
