#include "lists.h"

/**
 * pop_listint - deletes head a node of the linked_list
 * @head: ptr to first element in the linked_list
 *
 * Return: data inside the deleted elements,
 * 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
