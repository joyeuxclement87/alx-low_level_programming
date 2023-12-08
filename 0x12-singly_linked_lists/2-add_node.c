#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node - adds a new node at linked list
 * @head: double pointer
 * @str: new str
 * Return: value of return
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int ln = 0;
	list_t *nw;

	while (str[ln])
		ln++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);
	nw->len = ln;
	nw->str = strdup(str);
	nw->next = (*head);
	(*head) = nw;
	return (*head);
}
