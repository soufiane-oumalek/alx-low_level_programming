#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of
 * a dlistint_t linked list.
 * @head: head of linked list
 * @index: node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;

	while (index != 0)
	{
		ptr = ptr->next;
		index--;
		if (ptr == NULL)
			return (0);
	}
	return (ptr);
}
