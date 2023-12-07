#include "lists.h"
#include <stdio.h>
/**
 * print_list - entry [oint]
 * @h: pointer to print
 * Return: value for return
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		h = h->next
	}
		else
			printf("[0] (nil)\n");
		a++;
}
return (a);
}
