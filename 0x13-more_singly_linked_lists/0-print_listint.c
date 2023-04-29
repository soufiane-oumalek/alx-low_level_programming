#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements
 * @h: a head  pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);

	return (1 + print_listint(h->next));

}
