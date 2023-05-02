#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to head
 * @index: index of delete node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old, *curr;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	old = *head;
	curr = (*head)->next;

	for (i = 1; curr != NULL && i < index; i++)
	{
		old = curr;
		curr = curr->next;
	}

	if (!curr)
		return (-1);

	old->next = curr->next;
	free(curr);

	return (1);
}
