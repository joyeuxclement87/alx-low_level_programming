#include <stdlib.h>
#include "lists.h"
/**
 * list_len - a linked list
 * @h: pointer
 * Return: the value of return
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
