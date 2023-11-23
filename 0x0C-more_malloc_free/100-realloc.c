#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block
 * @ptr: for memory pointer
 * @old_size: allocated size
 * @new_size: new size
 * Return: pointer of new
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer1;
	char *pointer_older;
	unsigned int a;

	if (!ptr)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	pointer1 = malloc(new_size);
	if (!pointer1)
		return (NULL);
	pointer_older = ptr;
	if (new_size < old_size)
	{
		a = 0;
		while (a < new_size)
		{
			pointer1[a] = pointer_older[a];
			a++;
		}
	}
	if (new_size > old_size)
	{
	a = 0;
	while (a < old_size)
	{
	pointer1[a] = pointer_older[a];
	a++;
		}
	}
	free(ptr);
	return (pointer1);
}

