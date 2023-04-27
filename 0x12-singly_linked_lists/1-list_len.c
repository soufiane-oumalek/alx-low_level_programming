#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a head  pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}

