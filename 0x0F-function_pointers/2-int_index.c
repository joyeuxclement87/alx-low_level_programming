#include "function_pointers.h"
/**
 * int_index - return true, else 1
 * @array: array to be used
 * @size: size of elements in array in function
 * @cmp: pointer to func
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);

	else if (size <= 0 || cmp == NULL)
		return (-1);

	a = 0;
	while (a < size)
	{
		if (cmp(array[a]))
			return (a);
		a++;
	}
	return (-1);
}
