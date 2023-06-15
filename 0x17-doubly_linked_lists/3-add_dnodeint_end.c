#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of list
 * @n: value
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *h;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = n_node;
	}
	else
	{
		*head = n_node;
	}
	n_node->prev = h;
	return (n_node);
}
