#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head
 * @n: value new node
 * @idx: index of the list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *the_node, *curr_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	the_node = malloc(sizeof(listint_t));
	if (!the_node)
		return (NULL);

	the_node->n = n;

	if (idx == 0)
	{
		the_node->next = *head;
		*head = the_node;
		return (the_node);
	}
	curr_node = *head;

	while (i < idx - 1 && curr_node != NULL)
	{
		curr_node = curr_node->next;
		i++;
	}
	if (!curr_node)
	{
		free(the_node);
		return (NULL);
	}
	the_node->next = curr_node->next;
	curr_node->next = the_node;

	return (the_node);
}

