#include "lists.h"
/**
 * add_nodeint_end - entry point
 * @head: first element node
 * @n: the new element data
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp = *head;
listint_t *nw;

nw = malloc(sizeof(listint_t));
if (!nw)
return (NULL);

nw->n = n;
nw->next = NULL;
if (*head == NULL)
{
*head = nw;
return (nw);
}
while (temp->next)
temp = temp->next;
temp->next = nw;
return (nw);
}
