#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
