#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - the range for arr
 * @min: the min num
 * @max: max num
 * Return: value for return
 */

int *array_range(int min, int max)
{
	int *arry;
	int a;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arry = malloc(size * sizeof(int));
	if (arry == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < size)
	{
		arry[a] = min + a;
		a++;
	}
	return (arry);
}

