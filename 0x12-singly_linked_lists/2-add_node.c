#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: pointers for the lists
 * @str: pointer string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
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

