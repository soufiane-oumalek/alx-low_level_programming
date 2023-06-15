#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *next;
	int sum = 0;

	ptr = head;

	while (ptr != NULL)
	{
		next = ptr->next;
		sum += ptr->n;
		ptr = next;
	}
	return (sum);
}
