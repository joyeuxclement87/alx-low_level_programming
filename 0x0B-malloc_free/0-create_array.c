#include <stdlib.h>
#include "main.h"
/**
 * create_array - function for creating
 * @size: array size
 * @c: assigned char
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
	return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;
	return (array);
}
