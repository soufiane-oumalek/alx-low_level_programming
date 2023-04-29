#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head pointer
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}

