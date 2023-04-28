#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointers for the lists
 * @str: string pointer
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *node;

	if (!head || !str)
		return (NULL);

	n = malloc(sizeof(list_t));
		if (!n)
			return (NULL);

	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = strlen(str);
	n->next = (NULL);

	if (!*head)
	{
		*head = n;
		return (n);
	}
	node = *head;
	while (node->next != NULL)
		node = node->next;
	node = n;
	return (n);
}

