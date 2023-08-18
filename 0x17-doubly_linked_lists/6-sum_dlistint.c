#include "lists.h"

/**
 * sum_dlistint - returns sum of the data (n) of the  dlistint_t list
 * @head: ptr to list
 * Return: sum data in the list, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
