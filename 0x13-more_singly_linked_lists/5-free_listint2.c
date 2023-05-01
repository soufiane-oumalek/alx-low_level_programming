#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return;

	for (curr = *head; curr != NULL; curr = *head)
	{
		*head = curr->next;
		free(curr);
	}
	*head = NULL;
}

