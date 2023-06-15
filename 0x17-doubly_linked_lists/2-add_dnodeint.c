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

	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;

	return (n_node);
}
