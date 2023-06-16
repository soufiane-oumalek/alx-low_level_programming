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
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (ptr == NULL)
		return (-1);

	while (index != i)
	{
		ptr = ptr->next;
		i++;
		if (ptr == NULL)
			return (-1);
	}
	if (index == 0)
		*head = ptr->next;

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;

	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	free(ptr);
	return (1);
}
