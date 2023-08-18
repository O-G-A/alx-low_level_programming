#include "lists.h"

/**
 * get_dnodeint_at_index - returns  nth node of dlistint_t linked list
 * @head: ptr to list
 * @index: nth node
 * Return: nth node, NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
