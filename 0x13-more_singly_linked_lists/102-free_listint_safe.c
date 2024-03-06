#include "lists.h"
/**
 * free_listint_safe - function to frees linked list
 * @h: first node pointer
 * Return: num of freed linded list
 */
size_t free_listint_safe(listint_t **h)
{
int dff;
size_t ln = 0;
listint_t *tmp;

if (!h || !*h)
return (0);

while (*h)
{
dff = *h - (*h)->next;
if (dff > 0)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
ln++;
}
else
{
free(*h);
*h = NULL;
ln++;
break;
}
}
*h = NULL;
return (ln);
}
