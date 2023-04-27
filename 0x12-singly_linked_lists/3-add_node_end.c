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
	list_t *node = *head;
	list_t *n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	for (; node->next; node = node->next)
	{

	}
	node->next = n;
	return (n);
}

