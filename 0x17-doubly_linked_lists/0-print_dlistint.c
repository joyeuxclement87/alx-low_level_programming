#include "lists.h"
/**
 * print_dlistint - to print all element
 * @h:list's head
 * Return: nodes num
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counting;

	counting = 0;

	if (h == NULL)
		return (counting);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counting++;
		h = h->next;
	}
	return (counting);
}
