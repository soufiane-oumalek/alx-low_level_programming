#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: head pointer
 */
void free_list(list_t *head)
{
	list_t *n = head;

	while (n != NULL)
	{
		list_t *temp = n->next;

		free(n->str);
		free(n);
		n = temp;
	}
}
