#include "lists.h"

/**
 * reverse_listint - reverses the linked_list
 * @head: ptr to the first node in the list
 *
 * Return: the ptr to first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_lst = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev_lst;
		prev_lst = *head;
		*head = next;
	}

	*head = prev_lst;

	return (*head);
}
