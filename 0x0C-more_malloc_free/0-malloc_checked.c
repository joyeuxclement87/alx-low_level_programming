#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function for chicking
 * @b: the undigmed int
 * Return: the value to be returned
 */

void *malloc_checked(unsigned int b)
{
	void *pointr;

	pointr = malloc(b);
	if (pointr == NULL)
		exit(98);
	return (pointr);
}

