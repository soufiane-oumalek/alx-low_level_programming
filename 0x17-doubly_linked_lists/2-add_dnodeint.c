#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * *add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: list linked head
 * @n: num of linked list
 * Return: num of element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *h;

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	n_node->next = h;

	if (h != NULL)
		h->prev = n_node;

	*head = n_node;

	return (n_node);
}
