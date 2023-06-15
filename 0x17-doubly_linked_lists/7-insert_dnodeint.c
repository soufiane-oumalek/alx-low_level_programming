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
	dlistint_t *n_node, *cur, *ptr;
	unsigned int index = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	cur = *h;

	while (cur != NULL)
	{
		if (index == idx)
		{
			n_node->prev = cur->prev;
			cur->prev->next = n_node;
			cur->prev = n_node;
			n_node->next = cur;
			return (n_node);
		}
		index++;
		ptr = cur;
		cur = cur->next;
	}
	if (index == idx)
	{
		ptr->next = n_node;
		n_node->prev = ptr;
		n_node->next = NULL;
		return (n_node);
	}
	return (NULL);
}
