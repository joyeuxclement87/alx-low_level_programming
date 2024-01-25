#include "lists.h"

/**
 * dlistint_len - len number
 * @h: linked list head
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counting;

	counting = 0;
	if (h == NULL)
		return (counting);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		counting++;
		h = h->next;
	}
	return (counting);
}
