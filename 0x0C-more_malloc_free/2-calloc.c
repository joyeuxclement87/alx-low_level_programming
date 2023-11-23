#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function to be used
 * @nmemb: unsigned int to be used
 * @size: size int to be used
 * Return: the value for return
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	memset(pointer, 0, nmemb * size);
	return (pointer);
}
