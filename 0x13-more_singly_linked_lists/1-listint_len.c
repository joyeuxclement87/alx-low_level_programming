#include "lists.h"
/**
 * listint_len - entry point of linked lists
 * @h: listint_t to traverse in linked list
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
