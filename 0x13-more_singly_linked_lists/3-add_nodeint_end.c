#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer head
 * @n: the number int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *another_node;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	another_node = *head;

	for (; another_node->next != NULL; another_node = another_node->next)
		;
	another_node->next = node;

	return (node);
}
