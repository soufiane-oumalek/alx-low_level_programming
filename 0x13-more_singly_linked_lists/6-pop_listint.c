#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * @head: head pointer
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr;

	if (head == NULL || *head == NULL)
		return (0);

	curr = *head;
	n = curr->n;
	*head = curr->next;
	free(curr);

	return (n);
}
