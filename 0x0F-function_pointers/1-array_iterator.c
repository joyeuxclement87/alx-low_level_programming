#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - entry point for iterrator
 * @array: given an array
 * @size: size tgiven
 * @action: pointer to print hexx
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	a = 0;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
