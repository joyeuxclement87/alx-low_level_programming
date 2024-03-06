#include "lists.h"
/**
 * find_listint_loop - function to find loops in linked lst
 * @head: given linked list
 * Return: node addres or null
 **/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *fst = head;
listint_t *slw = head;

if (!head)
return (NULL);

while (slw && fst && fst->next)
{
fst = fst->next->next;
slw = slw->next;
if (fst == slw)
{
slw = head;
while (slw != fst)
{
slw = slw->next;
fst = fst->next;
}
return (fast);
}
}
return (NULL);
}
