#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a linked dlistint_t list
 * @h: head dlistint_t list
 * Return: num nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *curr_node = h;

	while (curr_node != NULL)
	{
		curr_node = curr_node->next;
		nodes++;
	}
	return (nodes);
}
