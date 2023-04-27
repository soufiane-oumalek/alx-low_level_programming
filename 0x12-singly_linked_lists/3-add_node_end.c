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
	unsigned int cnt = strlen(str);
	list_t *t = *head;
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)

	n->str = strdup(str);
	n->len = cnt;
	n->next = NULL;
	if (!*head)
	{
		*head = n;
	}
	for (;t->next; t = t->next)
		;
	t->next = n;
	return (n);
}

