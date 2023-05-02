#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head
 *
 * Return: the sum of all the data (n) of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr;

	for (curr = head; curr != NULL; curr = curr->next)
	{
		sum += curr->n;
	}

	return (sum);
}
