#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: head pointer
 * @index: index of node
 * Return:  returns the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;

	unsigned int i = 0;

	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}

	return (i == index ? curr : NULL);
}

