#include "lists.h"
#include <stdio.h>
/**
 * print_distint - prints all the elements of a dlistint_t list.
 * @h: distint list
 * Return: number nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *curr_node = h;
	
	while (curr_node != NULL)
	{
		printf("%i\n", curr_node->n);
		curr_node = curr_node->next;
		nodes++;
	}
	return (nodes);
}
