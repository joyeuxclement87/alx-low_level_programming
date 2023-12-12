#include "lists.h"
/**
 * print_listint - entry poitn for stingly lists
 * @h: linked lists to print
 * Return: num nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
