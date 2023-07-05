#include "lists.h"

/**
 * sum_listint - calculates sum of all the data in listint_t list
 * @head: the first node in the linked_list
 *
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int r_sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		r_sum += tmp->n;
		tmp = tmp->next;
	}

	return (r_sum);
}
