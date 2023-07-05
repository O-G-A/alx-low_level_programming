#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of linked lists
 * @head: ptr to first node in the linked_lists
 * @n: the data to be inserted in the new node
 *
 * Return: ptr to the new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
