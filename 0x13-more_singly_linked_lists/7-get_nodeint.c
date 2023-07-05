#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a given index in linked_list
 * @head: the first node in the linked_list
 * @index: index of the node to be returned
 *
 * Return: the ptr in question, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *tmp = head;

	while (tmp && a < index)
	{
		tmp = tmp->next;
		a++;
	}

	return (tmp ? tmp : NULL);
}
