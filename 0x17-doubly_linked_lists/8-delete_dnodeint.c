#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: linked list
 * @index: index delete nod
 * Return: 1 if success, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (-1);

	ptr = *head;

	if (ptr == NULL)
		return (-1);

	while (index != 0)
	{
		ptr = ptr->next;
		index--;
		if (ptr == NULL)
			return (-1);
	}

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;
	else
	{
		*head = ptr->next;
		if (ptr->next != NULL)
			ptr->next->prev = NULL;
		free(ptr);
	}
	return (1);
}
