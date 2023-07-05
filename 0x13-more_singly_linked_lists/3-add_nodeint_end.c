#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked_list
 * @head: ptr to first element in the lists
 * @n: the data to be inserted the new element
 *
 * Return: ptr to the new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *tmp = *head;

	new_list = malloc(sizeof(listint_t));
	if (!new_list)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_list;

	return (new_list);
}
