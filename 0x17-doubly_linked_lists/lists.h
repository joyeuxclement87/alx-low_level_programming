#ifndef _LISTS_
#define _LISTS_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dlistint_s - linked list
 * @n: used int
 * @prev: node for prev
 * @next: node for next
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif

