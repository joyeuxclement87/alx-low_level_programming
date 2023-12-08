#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int ln = 0;
	list_t *temp = *head;
	list_t *nw;

	while (str[ln])
		ln++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);
	nw->str = strdup(str);
	nw->len = ln;
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
