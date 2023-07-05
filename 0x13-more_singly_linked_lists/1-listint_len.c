#include "lists.h"

/**
 * listint_len - returns number of the elements in linked lists
 * @h: linked list to traverse
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}

	return (node_num);
}
