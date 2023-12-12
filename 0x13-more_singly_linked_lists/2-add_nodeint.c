#include "lists.h"
/**
 * add_nodeint - adding not at entry point of linked list
 * @head: first node pointer
 * @n: inserted data in node
 * Return: pointer or fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
