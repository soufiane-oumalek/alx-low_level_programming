#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head pointer for linekd list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
	}
	return (i);
}

