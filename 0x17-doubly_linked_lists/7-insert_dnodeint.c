#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: linked list
 * @idx: indek for new node
 * @n: the value of new node
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *n_node;

	if (h == NULL)
		return (NULL);

	ptr = *h;

	for (; idx != 0; idx--)
	{
		ptr = ptr->next;
		idx--;
		if (ptr == NULL)
			return (NULL);
	}
	n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->n = n;
	n_node->next = ptr;
	n_node->prev = ptr->prev;
	if (ptr->prev != NULL)
		ptr->prev->next = n_node;

	return (ptr);
}
