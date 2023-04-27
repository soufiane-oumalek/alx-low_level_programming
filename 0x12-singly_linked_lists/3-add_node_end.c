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
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)
	{
		free(n);
		return (NULL);
	}

	if (n->str == NULL)
	{
		n->str = 0;
		n->len = 0;
		n->next = *head;
		*head = n;
		return (n);
	}
	else
	{
		n->str = strdup(str);
		if (n->str == NULL)
		{
			free(n);
			return (NULL);
		}
		n->len = strlen(str);
		n->next = *head;
		*head = n;
		return (n);
	}
	return (NULL);
}

